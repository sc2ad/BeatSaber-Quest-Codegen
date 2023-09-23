#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::RuntimeDebugger {
class RuntimeDebuggerOpenXRFeature;
}
// Type: UnityEngine.XR.OpenXR.Features.RuntimeDebugger::RuntimeDebuggerOpenXRFeature
namespace UnityEngine::XR::OpenXR::Features::RuntimeDebugger {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14201))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16070))
// CS Name: UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature
class CORDL_TYPE RuntimeDebuggerOpenXRFeature : public UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~RuntimeDebuggerOpenXRFeature() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeDebuggerOpenXRFeature", modifiers: " const&", def_value: None }]
constexpr RuntimeDebuggerOpenXRFeature(RuntimeDebuggerOpenXRFeature const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeDebuggerOpenXRFeature", modifiers: "&&", def_value: None }]
constexpr RuntimeDebuggerOpenXRFeature(RuntimeDebuggerOpenXRFeature&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeDebuggerOpenXRFeature(void* ptr) noexcept : UnityEngine::XR::OpenXR::Features::OpenXRFeature(ptr) {
}


  constexpr RuntimeDebuggerOpenXRFeature& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeDebuggerOpenXRFeature& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeDebuggerOpenXRFeature& operator=(RuntimeDebuggerOpenXRFeature&& o) noexcept = default;
  constexpr RuntimeDebuggerOpenXRFeature& operator=(RuntimeDebuggerOpenXRFeature const& o) noexcept = default;
                


// Fields

static System::Guid __declspec(property(get=__get_kEditorToPlayerRequestDebuggerOutput, put=__set_kEditorToPlayerRequestDebuggerOutput))  kEditorToPlayerRequestDebuggerOutput;

static void __set_kEditorToPlayerRequestDebuggerOutput(System::Guid value) ;

static System::Guid __get_kEditorToPlayerRequestDebuggerOutput() ;

static System::Guid __declspec(property(get=__get_kPlayerToEditorSendDebuggerOutput, put=__set_kPlayerToEditorSendDebuggerOutput))  kPlayerToEditorSendDebuggerOutput;

static void __set_kPlayerToEditorSendDebuggerOutput(System::Guid value) ;

static System::Guid __get_kPlayerToEditorSendDebuggerOutput() ;

 uint32_t __declspec(property(get=__get_cacheSize, put=__set_cacheSize))  cacheSize;

constexpr void __set_cacheSize(uint32_t value) ;

constexpr uint32_t __get_cacheSize() const;

 uint32_t __declspec(property(get=__get_perThreadCacheSize, put=__set_perThreadCacheSize))  perThreadCacheSize;

constexpr void __set_perThreadCacheSize(uint32_t value) ;

constexpr uint32_t __get_perThreadCacheSize() const;

 uint32_t __declspec(property(get=__get_lutOffset, put=__set_lutOffset))  lutOffset;

constexpr void __set_lutOffset(uint32_t value) ;

constexpr uint32_t __get_lutOffset() const;

/// @brief Field Library offset 0
static constexpr ::ConstString  Library{u"openxr_runtime_debugger"};


// Methods

/// @brief Method HookGetInstanceProcAddr addr 0x2b0650c size 0xfc virtual true final false
 ::cordl_internals::intptr_t HookGetInstanceProcAddr(::cordl_internals::intptr_t func) ;

/// @brief Method RecvMsg addr 0x2b06764 size 0x210 virtual false final false
 void RecvMsg(UnityEngine::Networking::PlayerConnection::MessageEventArgs args) ;

/// @brief Method Native_HookGetInstanceProcAddr addr 0x2b066d0 size 0x94 virtual false final false
static ::cordl_internals::intptr_t Native_HookGetInstanceProcAddr(::cordl_internals::intptr_t func, uint32_t cacheSize, uint32_t perThreadCacheSize) ;

/// @brief Method Native_GetDataForRead addr 0x2b06a08 size 0x8c virtual false final false
static bool Native_GetDataForRead(ByRef<::cordl_internals::intptr_t> ptr, ByRef<uint32_t> size) ;

/// @brief Method Native_GetLUTData addr 0x2b06974 size 0x94 virtual false final false
static void Native_GetLUTData(ByRef<::cordl_internals::intptr_t> ptr, ByRef<uint32_t> size, uint32_t offset) ;

/// @brief Method Native_StartDataAccess addr 0x2b06608 size 0x64 virtual false final false
static void Native_StartDataAccess() ;

/// @brief Method Native_EndDataAccess addr 0x2b0666c size 0x64 virtual false final false
static void Native_EndDataAccess() ;

// Ctor Parameters []
explicit RuntimeDebuggerOpenXRFeature() ;

/// @brief Method .ctor addr 0x2b06a94 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::RuntimeDebugger
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature, "UnityEngine.XR.OpenXR.Features.RuntimeDebugger", "RuntimeDebuggerOpenXRFeature");
