#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
namespace UnityEngine {
struct DeviceType;
}
namespace UnityEngine::Experimental::Rendering {
struct FormatUsage;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
struct OperatingSystemFamily;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
// Forward declare root types
namespace UnityEngine {
class SystemInfo;
}
// Type: UnityEngine::SystemInfo
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10081))
// CS Name: UnityEngine.SystemInfo
class CORDL_TYPE SystemInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SystemInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: " const&", def_value: None }]
constexpr SystemInfo(SystemInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "&&", def_value: None }]
constexpr SystemInfo(SystemInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SystemInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SystemInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SystemInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SystemInfo& operator=(SystemInfo&& o) noexcept = default;
  constexpr SystemInfo& operator=(SystemInfo const& o) noexcept = default;
                


// Properties

static ::StringW __declspec(property(get=get_operatingSystem))  operatingSystem;

static UnityEngine::OperatingSystemFamily __declspec(property(get=get_operatingSystemFamily))  operatingSystemFamily;

static ::StringW __declspec(property(get=get_processorType))  processorType;

static int32_t __declspec(property(get=get_processorCount))  processorCount;

static int32_t __declspec(property(get=get_systemMemorySize))  systemMemorySize;

static ::StringW __declspec(property(get=get_deviceModel))  deviceModel;

static UnityEngine::DeviceType __declspec(property(get=get_deviceType))  deviceType;

static int32_t __declspec(property(get=get_graphicsMemorySize))  graphicsMemorySize;

static ::StringW __declspec(property(get=get_graphicsDeviceName))  graphicsDeviceName;

static UnityEngine::Rendering::GraphicsDeviceType __declspec(property(get=get_graphicsDeviceType))  graphicsDeviceType;

static ::StringW __declspec(property(get=get_graphicsDeviceVersion))  graphicsDeviceVersion;

static int32_t __declspec(property(get=get_graphicsShaderLevel))  graphicsShaderLevel;

static bool __declspec(property(get=get_supportsInstancing))  supportsInstancing;

static bool __declspec(property(get=get_usesReversedZBuffer))  usesReversedZBuffer;

static int32_t __declspec(property(get=get_maxTextureSize))  maxTextureSize;

static int32_t __declspec(property(get=get_maxRenderTextureSize))  maxRenderTextureSize;


// Methods

/// @brief Method get_operatingSystem addr 0x2b4d6a4 size 0x28 virtual false final false
static ::StringW get_operatingSystem() ;

/// @brief Method get_operatingSystemFamily addr 0x2b4d6f4 size 0x28 virtual false final false
static UnityEngine::OperatingSystemFamily get_operatingSystemFamily() ;

/// @brief Method get_processorType addr 0x2b4d744 size 0x28 virtual false final false
static ::StringW get_processorType() ;

/// @brief Method get_processorCount addr 0x2b4d794 size 0x28 virtual false final false
static int32_t get_processorCount() ;

/// @brief Method get_systemMemorySize addr 0x2b4d7e4 size 0x28 virtual false final false
static int32_t get_systemMemorySize() ;

/// @brief Method get_deviceModel addr 0x2b4d834 size 0x28 virtual false final false
static ::StringW get_deviceModel() ;

/// @brief Method get_deviceType addr 0x2b4d884 size 0x28 virtual false final false
static UnityEngine::DeviceType get_deviceType() ;

/// @brief Method get_graphicsMemorySize addr 0x2b4d8d4 size 0x28 virtual false final false
static int32_t get_graphicsMemorySize() ;

/// @brief Method get_graphicsDeviceName addr 0x2b4d924 size 0x28 virtual false final false
static ::StringW get_graphicsDeviceName() ;

/// @brief Method get_graphicsDeviceType addr 0x2b4d974 size 0x28 virtual false final false
static UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType() ;

/// @brief Method get_graphicsDeviceVersion addr 0x2b4d9c4 size 0x28 virtual false final false
static ::StringW get_graphicsDeviceVersion() ;

/// @brief Method get_graphicsShaderLevel addr 0x2b4da14 size 0x28 virtual false final false
static int32_t get_graphicsShaderLevel() ;

/// @brief Method get_supportsInstancing addr 0x2b4da64 size 0x28 virtual false final false
static bool get_supportsInstancing() ;

/// @brief Method get_usesReversedZBuffer addr 0x2b4dab4 size 0x28 virtual false final false
static bool get_usesReversedZBuffer() ;

/// @brief Method IsValidEnumValue addr 0x2b4db04 size 0x78 virtual false final false
static bool IsValidEnumValue(::bs_hook::EnumTypeWrapper value) ;

/// @brief Method SupportsRenderTextureFormat addr 0x2b4db7c size 0xd8 virtual false final false
static bool SupportsRenderTextureFormat(UnityEngine::RenderTextureFormat format) ;

/// @brief Method SupportsTextureFormat addr 0x2b4dc90 size 0xd8 virtual false final false
static bool SupportsTextureFormat(UnityEngine::TextureFormat format) ;

/// @brief Method get_maxTextureSize addr 0x2b4dda4 size 0x28 virtual false final false
static int32_t get_maxTextureSize() ;

/// @brief Method get_maxRenderTextureSize addr 0x2b4ddf4 size 0x28 virtual false final false
static int32_t get_maxRenderTextureSize() ;

/// @brief Method GetOperatingSystem addr 0x2b4d6cc size 0x28 virtual false final false
static ::StringW GetOperatingSystem() ;

/// @brief Method GetOperatingSystemFamily addr 0x2b4d71c size 0x28 virtual false final false
static UnityEngine::OperatingSystemFamily GetOperatingSystemFamily() ;

/// @brief Method GetProcessorType addr 0x2b4d76c size 0x28 virtual false final false
static ::StringW GetProcessorType() ;

/// @brief Method GetProcessorCount addr 0x2b4d7bc size 0x28 virtual false final false
static int32_t GetProcessorCount() ;

/// @brief Method GetPhysicalMemoryMB addr 0x2b4d80c size 0x28 virtual false final false
static int32_t GetPhysicalMemoryMB() ;

/// @brief Method GetDeviceModel addr 0x2b4d85c size 0x28 virtual false final false
static ::StringW GetDeviceModel() ;

/// @brief Method GetDeviceType addr 0x2b4d8ac size 0x28 virtual false final false
static UnityEngine::DeviceType GetDeviceType() ;

/// @brief Method GetGraphicsMemorySize addr 0x2b4d8fc size 0x28 virtual false final false
static int32_t GetGraphicsMemorySize() ;

/// @brief Method GetGraphicsDeviceName addr 0x2b4d94c size 0x28 virtual false final false
static ::StringW GetGraphicsDeviceName() ;

/// @brief Method GetGraphicsDeviceType addr 0x2b4d99c size 0x28 virtual false final false
static UnityEngine::Rendering::GraphicsDeviceType GetGraphicsDeviceType() ;

/// @brief Method GetGraphicsDeviceVersion addr 0x2b4d9ec size 0x28 virtual false final false
static ::StringW GetGraphicsDeviceVersion() ;

/// @brief Method GetGraphicsShaderLevel addr 0x2b4da3c size 0x28 virtual false final false
static int32_t GetGraphicsShaderLevel() ;

/// @brief Method SupportsInstancing addr 0x2b4da8c size 0x28 virtual false final false
static bool SupportsInstancing() ;

/// @brief Method UsesReversedZBuffer addr 0x2b4dadc size 0x28 virtual false final false
static bool UsesReversedZBuffer() ;

/// @brief Method HasRenderTextureNative addr 0x2b4dc54 size 0x3c virtual false final false
static bool HasRenderTextureNative(UnityEngine::RenderTextureFormat format) ;

/// @brief Method SupportsTextureFormatNative addr 0x2b4dd68 size 0x3c virtual false final false
static bool SupportsTextureFormatNative(UnityEngine::TextureFormat format) ;

/// @brief Method GetMaxTextureSize addr 0x2b4ddcc size 0x28 virtual false final false
static int32_t GetMaxTextureSize() ;

/// @brief Method GetMaxRenderTextureSize addr 0x2b4de1c size 0x28 virtual false final false
static int32_t GetMaxRenderTextureSize() ;

/// @brief Method IsFormatSupported addr 0x2b4de44 size 0x44 virtual false final false
static bool IsFormatSupported(UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::FormatUsage usage) ;

/// @brief Method GetCompatibleFormat addr 0x2b4de88 size 0x44 virtual false final false
static UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::FormatUsage usage) ;

/// @brief Method GetGraphicsFormat addr 0x2b4decc size 0x3c virtual false final false
static UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(UnityEngine::Experimental::Rendering::DefaultFormat format) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::SystemInfo);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SystemInfo, "UnityEngine", "SystemInfo");
