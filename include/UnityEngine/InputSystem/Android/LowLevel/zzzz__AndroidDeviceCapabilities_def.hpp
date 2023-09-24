#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidAxis;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidInputSource;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
class UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
class UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidDeviceCapabilities;
}
// Type: ::<>c
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6534))
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidDeviceCapabilities::<>c
class CORDL_TYPE UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c(UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c(UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c& operator=(UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c& operator=(UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c const& o) noexcept = default;
                


// Fields

static UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c value) ;

static UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c __get___9() ;

static System::Func_2<UnityEngine::InputSystem::Android::LowLevel::AndroidAxis,::StringW> __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(System::Func_2<UnityEngine::InputSystem::Android::LowLevel::AndroidAxis,::StringW> value) ;

static System::Func_2<UnityEngine::InputSystem::Android::LowLevel::AndroidAxis,::StringW> __get___9__8_0() ;


// Methods

static UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c New_ctor() ;

/// @brief Method .ctor addr 0x2954234 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ToString>b__8_0 addr 0x295423c size 0x64 virtual false final false
 ::StringW _ToString_b__8_0(UnityEngine::InputSystem::Android::LowLevel::AndroidAxis i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android::LowLevel
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidDeviceCapabilities
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6535))
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidDeviceCapabilities
struct CORDL_TYPE AndroidDeviceCapabilities : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __c = UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c;

// Ctor Parameters [CppParam { name: "deviceDescriptor", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "productId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vendorId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isVirtual", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "motionAxes", ty: "::ArrayW<UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>", modifiers: "", def_value: None }, CppParam { name: "inputSources", ty: "UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource", modifiers: "", def_value: None }]
constexpr AndroidDeviceCapabilities(::StringW deviceDescriptor, int32_t productId, int32_t vendorId, bool isVirtual, ::ArrayW<UnityEngine::InputSystem::Android::LowLevel::AndroidAxis> motionAxes, UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource inputSources) noexcept;


                    constexpr AndroidDeviceCapabilities(AndroidDeviceCapabilities const&) = default;
                    constexpr AndroidDeviceCapabilities(AndroidDeviceCapabilities&&) = default;
                    constexpr AndroidDeviceCapabilities& operator=(AndroidDeviceCapabilities const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AndroidDeviceCapabilities& operator=(AndroidDeviceCapabilities&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AndroidDeviceCapabilities(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_deviceDescriptor, put=__set_deviceDescriptor))  deviceDescriptor;

constexpr void __set_deviceDescriptor(::StringW value) ;

constexpr ::StringW __get_deviceDescriptor() const;

 int32_t __declspec(property(get=__get_productId, put=__set_productId))  productId;

constexpr void __set_productId(int32_t value) ;

constexpr int32_t __get_productId() const;

 int32_t __declspec(property(get=__get_vendorId, put=__set_vendorId))  vendorId;

constexpr void __set_vendorId(int32_t value) ;

constexpr int32_t __get_vendorId() const;

 bool __declspec(property(get=__get_isVirtual, put=__set_isVirtual))  isVirtual;

constexpr void __set_isVirtual(bool value) ;

constexpr bool __get_isVirtual() const;

 ::ArrayW<UnityEngine::InputSystem::Android::LowLevel::AndroidAxis> __declspec(property(get=__get_motionAxes, put=__set_motionAxes))  motionAxes;

constexpr void __set_motionAxes(::ArrayW<UnityEngine::InputSystem::Android::LowLevel::AndroidAxis> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Android::LowLevel::AndroidAxis> __get_motionAxes() const;

 UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource __declspec(property(get=__get_inputSources, put=__set_inputSources))  inputSources;

constexpr void __set_inputSources(UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource value) ;

constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource __get_inputSources() const;


// Methods

/// @brief Method ToJson addr 0x2953df4 size 0x6c virtual false final false
 ::StringW ToJson() ;

/// @brief Method FromJson addr 0x2953c00 size 0xc0 virtual false final false
static UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities FromJson(::StringW json) ;

/// @brief Method ToString addr 0x2953e60 size 0x370 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android::LowLevel
NEED_NO_BOX(UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidDeviceCapabilities____c, "UnityEngine.InputSystem.Android.LowLevel", "AndroidDeviceCapabilities/<>c");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, "UnityEngine.InputSystem.Android.LowLevel", "AndroidDeviceCapabilities");
