#pragma once

#include "Common\StepTimer.h"
#include "Common\DeviceResources.h"
#include "Content\Sample3DSceneRenderer.h"
#include "Content\SampleFpsTextRenderer.h"
#include <AZCommand.h>

using namespace AZ;

// 在屏幕上呈现 Direct2D 和 3D 内容。
namespace Amazing
{
	class AmazingMain : public DX::IDeviceNotify
	{
	public:
		AmazingMain(const std::shared_ptr<DX::DeviceResources>& deviceResources);
		~AmazingMain();
		bool CreateTimer();
		bool PreInitial();
		void CreateWindowSizeDependentResources();
		void Update();
		bool Render();

		// IDeviceNotify
		virtual void OnDeviceLost();
		virtual void OnDeviceRestored();
		bool m_bIsActive;
		bool m_bIsRunning;



	protected:
		AZCommand* m_pCommand;
		unsigned int m_uiMultsample;

		unsigned int m_iUpdateThreadNum;

	private:
		// 缓存的设备资源指针。
		std::shared_ptr<DX::DeviceResources> m_deviceResources;

		// TODO: 替换为你自己的内容呈现器。
		std::unique_ptr<Sample3DSceneRenderer> m_sceneRenderer;
		std::unique_ptr<SampleFpsTextRenderer> m_fpsTextRenderer;

		// 渲染循环计时器。
		DX::StepTimer m_timer;
	};
}