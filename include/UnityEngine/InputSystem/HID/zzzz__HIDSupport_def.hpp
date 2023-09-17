#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::HID {
struct ____UnityEngine__InputSystem__HID__HID__UsagePage;
}
namespace UnityEngine::InputSystem::HID {
struct ____UnityEngine__InputSystem__HID__HID__GenericDesktop;
}
// Forward declare root types
namespace UnityEngine::InputSystem::HID {
class HIDSupport;
}
namespace UnityEngine::InputSystem::HID {
struct ____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage;
}
// Type: ::HIDPageUsage
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6494))
// CS Name: UnityEngine.InputSystem.HID.HIDSupport::HIDPageUsage
struct CORDL_TYPE ____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "page", ty: "::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage", modifiers: "", def_value: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage(::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage page, int32_t usage) noexcept;


                    constexpr ____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage(____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage const&) = default;
                    constexpr ____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage(____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage&&) = default;
                    constexpr ____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage& operator=(____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage& operator=(____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage __declspec(property(get=__get_page, put=__set_page))  page;

constexpr void __set_page(::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage value) ;

constexpr ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage __get_page() const;

 int32_t __declspec(property(get=__get_usage, put=__set_usage))  usage;

constexpr void __set_usage(int32_t value) ;

constexpr int32_t __get_usage() const;


// Methods

/// @brief Method .ctor addr 0x294771c size 0x8 virtual false final false
 void _ctor(::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage page, int32_t usage) ;

/// @brief Method .ctor addr 0x294c808 size 0xc virtual false final false
 void _ctor(::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__GenericDesktop usage) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: UnityEngine.InputSystem.HID::HIDSupport
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6495))
// CS Name: UnityEngine.InputSystem.HID.HIDSupport
class CORDL_TYPE HIDSupport : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using HIDPageUsage = ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HIDSupport() = default;

// Ctor Parameters [CppParam { name: "", ty: "HIDSupport", modifiers: " const&", def_value: None }]
constexpr HIDSupport(HIDSupport const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HIDSupport", modifiers: "&&", def_value: None }]
constexpr HIDSupport(HIDSupport&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HIDSupport(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HIDSupport& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HIDSupport& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HIDSupport& operator=(HIDSupport&& o) noexcept = default;
  constexpr HIDSupport& operator=(HIDSupport const& o) noexcept = default;
                


// Fields

static ::ArrayW<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> __declspec(property(get=__get_s_SupportedHIDUsages, put=__set_s_SupportedHIDUsages))  s_SupportedHIDUsages;

static void __set_s_SupportedHIDUsages(::ArrayW<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> value) ;

static ::ArrayW<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> __get_s_SupportedHIDUsages() ;


// Properties

static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> __declspec(property(get=get_supportedHIDUsages, put=set_supportedHIDUsages))  supportedHIDUsages;


// Methods

/// @brief Method get_supportedHIDUsages addr 0x29476bc size 0x60 virtual false final false
static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> get_supportedHIDUsages() ;

/// @brief Method set_supportedHIDUsages addr 0x294c498 size 0x224 virtual false final false
static void set_supportedHIDUsages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> value) ;

/// @brief Method Initialize addr 0x294c6bc size 0x14c virtual false final false
static void Initialize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::HID::HIDSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HIDSupport, "UnityEngine.InputSystem.HID", "HIDSupport");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage, "UnityEngine.InputSystem.HID", "HIDSupport/HIDPageUsage");
