#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__HIDElementDescriptor;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__HIDElementFlags;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__HIDCollectionType;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__Simulation;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__Button;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__HIDReportType;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor;
}
namespace UnityEngine::InputSystem::HID {
class UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::HID {
class UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__GenericDesktop;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__UsagePage;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
namespace System {
class Type;
}
namespace GlobalNamespace {
class UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Layouts {
class UnityEngine__InputSystem__Layouts__InputControlLayout__Builder;
}
// Forward declare root types
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__Button;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__GenericDesktop;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__HIDCollectionType;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__HIDElementFlags;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__HIDReportType;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__Simulation;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__UsagePage;
}
namespace GlobalNamespace {
class UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c;
}
namespace UnityEngine::InputSystem::HID {
class HID;
}
namespace UnityEngine::InputSystem::HID {
class UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder;
}
namespace UnityEngine::InputSystem::HID {
class UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HID__HIDElementDescriptor;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6474))
// CS Name: UnityEngine.InputSystem.HID.HID::HIDLayoutBuilder::<>c
class CORDL_TYPE UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c(UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c(UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c& operator=(UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c& operator=(UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c value) ;

static GlobalNamespace::UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c __get___9() ;

static System::Predicate_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> __declspec(property(get=__get___9__4_0, put=__set___9__4_0))  __9__4_0;

static void __set___9__4_0(System::Predicate_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> value) ;

static System::Predicate_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> __get___9__4_0() ;

static System::Predicate_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> __declspec(property(get=__get___9__4_1, put=__set___9__4_1))  __9__4_1;

static void __set___9__4_1(System::Predicate_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> value) ;

static System::Predicate_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> __get___9__4_1() ;

static System::Func_2<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem,::StringW> __declspec(property(get=__get___9__4_2, put=__set___9__4_2))  __9__4_2;

static void __set___9__4_2(System::Func_2<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem,::StringW> value) ;

static System::Func_2<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem,::StringW> __get___9__4_2() ;


// Methods

static GlobalNamespace::UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c New_ctor() ;

/// @brief Method .ctor addr 0x294b144 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Build>b__4_0 addr 0x294b14c size 0x24 virtual false final false
 bool _Build_b__4_0(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor element) ;

/// @brief Method <Build>b__4_1 addr 0x294b170 size 0x24 virtual false final false
 bool _Build_b__4_1(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor element) ;

/// @brief Method <Build>b__4_2 addr 0x294b194 size 0xc virtual false final false
 ::StringW _Build_b__4_2(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HIDLayoutBuilder
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6475))
// CS Name: UnityEngine.InputSystem.HID.HID::HIDLayoutBuilder
class CORDL_TYPE UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder(UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder(UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder& operator=(UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder& operator=(UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_displayName, put=__set_displayName))  displayName;

constexpr void __set_displayName(::StringW value) ;

constexpr ::StringW __get_displayName() const;

 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor __declspec(property(get=__get_hidDescriptor, put=__set_hidDescriptor))  hidDescriptor;

constexpr void __set_hidDescriptor(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor value) ;

constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor __get_hidDescriptor() const;

 ::StringW __declspec(property(get=__get_parentLayout, put=__set_parentLayout))  parentLayout;

constexpr void __set_parentLayout(::StringW value) ;

constexpr ::StringW __get_parentLayout() const;

 System::Type __declspec(property(get=__get_deviceType, put=__set_deviceType))  deviceType;

constexpr void __set_deviceType(System::Type value) ;

constexpr System::Type __get_deviceType() const;


// Methods

/// @brief Method Build addr 0x2949470 size 0xcac virtual false final false
 UnityEngine::InputSystem::Layouts::InputControlLayout Build() ;

static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder New_ctor() ;

/// @brief Method .ctor addr 0x294775c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: ::HIDReportType
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6476))
// CS Name: UnityEngine.InputSystem.HID.HID::HIDReportType
struct CORDL_TYPE UnityEngine__InputSystem__HID__HID__HIDReportType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID__HIDReportType(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__HID__HID__HIDReportType(UnityEngine__InputSystem__HID__HID__HIDReportType const&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__HIDReportType(UnityEngine__InputSystem__HID__HID__HIDReportType&&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__HIDReportType& operator=(UnityEngine__InputSystem__HID__HID__HIDReportType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__HID__HID__HIDReportType& operator=(UnityEngine__InputSystem__HID__HID__HIDReportType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__HID__HID__HIDReportType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__HID__HID__HIDReportType_Unwrapped : int32_t {
__Unknown = 0,
__Input = 1,
__Output = 2,
__Feature = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__HID__HID__HIDReportType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__HID__HID__HIDReportType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType const Unknown;

/// @brief Field Input offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType const Input;

/// @brief Field Output offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType const Output;

/// @brief Field Feature offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType const Feature;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: ::HIDCollectionType
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6477))
// CS Name: UnityEngine.InputSystem.HID.HID::HIDCollectionType
struct CORDL_TYPE UnityEngine__InputSystem__HID__HID__HIDCollectionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID__HIDCollectionType(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__HID__HID__HIDCollectionType(UnityEngine__InputSystem__HID__HID__HIDCollectionType const&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__HIDCollectionType(UnityEngine__InputSystem__HID__HID__HIDCollectionType&&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__HIDCollectionType& operator=(UnityEngine__InputSystem__HID__HID__HIDCollectionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__HID__HID__HIDCollectionType& operator=(UnityEngine__InputSystem__HID__HID__HIDCollectionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__HID__HID__HIDCollectionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__HID__HID__HIDCollectionType_Unwrapped : int32_t {
__Physical = 0,
__Application = 1,
__Logical = 2,
__Report = 3,
__NamedArray = 4,
__UsageSwitch = 5,
__UsageModifier = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__HID__HID__HIDCollectionType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__HID__HID__HIDCollectionType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Physical offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionType const Physical;

/// @brief Field Application offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionType const Application;

/// @brief Field Logical offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionType const Logical;

/// @brief Field Report offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionType const Report;

/// @brief Field NamedArray offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionType const NamedArray;

/// @brief Field UsageSwitch offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionType const UsageSwitch;

/// @brief Field UsageModifier offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionType const UsageModifier;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: ::HIDElementFlags
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6478))
// CS Name: UnityEngine.InputSystem.HID.HID::HIDElementFlags
struct CORDL_TYPE UnityEngine__InputSystem__HID__HID__HIDElementFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID__HIDElementFlags(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__HID__HID__HIDElementFlags(UnityEngine__InputSystem__HID__HID__HIDElementFlags const&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__HIDElementFlags(UnityEngine__InputSystem__HID__HID__HIDElementFlags&&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__HIDElementFlags& operator=(UnityEngine__InputSystem__HID__HID__HIDElementFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__HID__HID__HIDElementFlags& operator=(UnityEngine__InputSystem__HID__HID__HIDElementFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__HID__HID__HIDElementFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__HID__HID__HIDElementFlags_Unwrapped : int32_t {
__Constant = 1,
__Variable = 2,
__Relative = 4,
__Wrap = 8,
__NonLinear = 16,
__NoPreferred = 32,
__NullState = 64,
__Volatile = 128,
__BufferedBytes = 256,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__HID__HID__HIDElementFlags_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__HID__HID__HIDElementFlags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Constant offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementFlags const Constant;

/// @brief Field Variable offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementFlags const Variable;

/// @brief Field Relative offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementFlags const Relative;

/// @brief Field Wrap offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementFlags const Wrap;

/// @brief Field NonLinear offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementFlags const NonLinear;

/// @brief Field NoPreferred offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementFlags const NoPreferred;

/// @brief Field NullState offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementFlags const NullState;

/// @brief Field Volatile offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementFlags const Volatile;

/// @brief Field BufferedBytes offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementFlags const BufferedBytes;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: ::HIDElementDescriptor
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6479))
// CS Name: UnityEngine.InputSystem.HID.HID::HIDElementDescriptor
struct CORDL_TYPE UnityEngine__InputSystem__HID__HID__HIDElementDescriptor : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usagePage", ty: "UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage", modifiers: "", def_value: None }, CppParam { name: "unit", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unitExponent", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "logicalMin", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "logicalMax", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "physicalMin", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "physicalMax", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reportType", ty: "UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType", modifiers: "", def_value: None }, CppParam { name: "collectionIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reportId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reportSizeInBits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reportOffsetInBits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementFlags", modifiers: "", def_value: None }, CppParam { name: "usageMin", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "usageMax", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID__HIDElementDescriptor(int32_t usage, UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage usagePage, int32_t unit, int32_t unitExponent, int32_t logicalMin, int32_t logicalMax, int32_t physicalMin, int32_t physicalMax, UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType reportType, int32_t collectionIndex, int32_t reportId, int32_t reportSizeInBits, int32_t reportOffsetInBits, UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementFlags flags, System::Nullable_1<int32_t> usageMin, System::Nullable_1<int32_t> usageMax) noexcept;


                    constexpr UnityEngine__InputSystem__HID__HID__HIDElementDescriptor(UnityEngine__InputSystem__HID__HID__HIDElementDescriptor const&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__HIDElementDescriptor(UnityEngine__InputSystem__HID__HID__HIDElementDescriptor&&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__HIDElementDescriptor& operator=(UnityEngine__InputSystem__HID__HID__HIDElementDescriptor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__HID__HID__HIDElementDescriptor& operator=(UnityEngine__InputSystem__HID__HID__HIDElementDescriptor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__HID__HID__HIDElementDescriptor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_usage, put=__set_usage))  usage;

constexpr void __set_usage(int32_t value) ;

constexpr int32_t __get_usage() const;

 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage __declspec(property(get=__get_usagePage, put=__set_usagePage))  usagePage;

constexpr void __set_usagePage(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage value) ;

constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage __get_usagePage() const;

 int32_t __declspec(property(get=__get_unit, put=__set_unit))  unit;

constexpr void __set_unit(int32_t value) ;

constexpr int32_t __get_unit() const;

 int32_t __declspec(property(get=__get_unitExponent, put=__set_unitExponent))  unitExponent;

constexpr void __set_unitExponent(int32_t value) ;

constexpr int32_t __get_unitExponent() const;

 int32_t __declspec(property(get=__get_logicalMin, put=__set_logicalMin))  logicalMin;

constexpr void __set_logicalMin(int32_t value) ;

constexpr int32_t __get_logicalMin() const;

 int32_t __declspec(property(get=__get_logicalMax, put=__set_logicalMax))  logicalMax;

constexpr void __set_logicalMax(int32_t value) ;

constexpr int32_t __get_logicalMax() const;

 int32_t __declspec(property(get=__get_physicalMin, put=__set_physicalMin))  physicalMin;

constexpr void __set_physicalMin(int32_t value) ;

constexpr int32_t __get_physicalMin() const;

 int32_t __declspec(property(get=__get_physicalMax, put=__set_physicalMax))  physicalMax;

constexpr void __set_physicalMax(int32_t value) ;

constexpr int32_t __get_physicalMax() const;

 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType __declspec(property(get=__get_reportType, put=__set_reportType))  reportType;

constexpr void __set_reportType(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType value) ;

constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType __get_reportType() const;

 int32_t __declspec(property(get=__get_collectionIndex, put=__set_collectionIndex))  collectionIndex;

constexpr void __set_collectionIndex(int32_t value) ;

constexpr int32_t __get_collectionIndex() const;

 int32_t __declspec(property(get=__get_reportId, put=__set_reportId))  reportId;

constexpr void __set_reportId(int32_t value) ;

constexpr int32_t __get_reportId() const;

 int32_t __declspec(property(get=__get_reportSizeInBits, put=__set_reportSizeInBits))  reportSizeInBits;

constexpr void __set_reportSizeInBits(int32_t value) ;

constexpr int32_t __get_reportSizeInBits() const;

 int32_t __declspec(property(get=__get_reportOffsetInBits, put=__set_reportOffsetInBits))  reportOffsetInBits;

constexpr void __set_reportOffsetInBits(int32_t value) ;

constexpr int32_t __get_reportOffsetInBits() const;

 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementFlags __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementFlags value) ;

constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementFlags __get_flags() const;

 System::Nullable_1<int32_t> __declspec(property(get=__get_usageMin, put=__set_usageMin))  usageMin;

constexpr void __set_usageMin(System::Nullable_1<int32_t> value) ;

constexpr System::Nullable_1<int32_t> __get_usageMin() const;

 System::Nullable_1<int32_t> __declspec(property(get=__get_usageMax, put=__set_usageMax))  usageMax;

constexpr void __set_usageMax(System::Nullable_1<int32_t> value) ;

constexpr System::Nullable_1<int32_t> __get_usageMax() const;


// Properties

 bool __declspec(property(get=get_hasNullState))  hasNullState;

 bool __declspec(property(get=get_hasPreferredState))  hasPreferredState;

 bool __declspec(property(get=get_isArray))  isArray;

 bool __declspec(property(get=get_isNonLinear))  isNonLinear;

 bool __declspec(property(get=get_isRelative))  isRelative;

 bool __declspec(property(get=get_isConstant))  isConstant;

 bool __declspec(property(get=get_isWrapping))  isWrapping;

 bool __declspec(property(get=get_isSigned))  isSigned;

 float_t __declspec(property(get=get_minFloatValue))  minFloatValue;

 float_t __declspec(property(get=get_maxFloatValue))  maxFloatValue;


// Methods

/// @brief Method get_hasNullState addr 0x294b1a0 size 0xc virtual false final false
 bool get_hasNullState() ;

/// @brief Method get_hasPreferredState addr 0x294b1ac size 0x10 virtual false final false
 bool get_hasPreferredState() ;

/// @brief Method get_isArray addr 0x294b1bc size 0x10 virtual false final false
 bool get_isArray() ;

/// @brief Method get_isNonLinear addr 0x294b1cc size 0xc virtual false final false
 bool get_isNonLinear() ;

/// @brief Method get_isRelative addr 0x294b1d8 size 0xc virtual false final false
 bool get_isRelative() ;

/// @brief Method get_isConstant addr 0x294b1e4 size 0xc virtual false final false
 bool get_isConstant() ;

/// @brief Method get_isWrapping addr 0x294b1f0 size 0xc virtual false final false
 bool get_isWrapping() ;

/// @brief Method get_isSigned addr 0x294a28c size 0xc virtual false final false
 bool get_isSigned() ;

/// @brief Method get_minFloatValue addr 0x294b1fc size 0x9c virtual false final false
 float_t get_minFloatValue() ;

/// @brief Method get_maxFloatValue addr 0x294b298 size 0xa4 virtual false final false
 float_t get_maxFloatValue() ;

/// @brief Method Is addr 0x294a3d0 size 0x24 virtual false final false
 bool Is(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage usagePage, int32_t usage) ;

/// @brief Method DetermineName addr 0x294a4e0 size 0x210 virtual false final false
 ::StringW DetermineName() ;

/// @brief Method DetermineDisplayName addr 0x294a6f0 size 0xfc virtual false final false
 ::StringW DetermineDisplayName() ;

/// @brief Method IsUsableElement addr 0x2947724 size 0x38 virtual false final false
 bool IsUsableElement() ;

/// @brief Method DetermineLayout addr 0x294a3f4 size 0xec virtual false final false
 ::StringW DetermineLayout() ;

/// @brief Method DetermineFormat addr 0x294a7ec size 0x108 virtual false final false
 UnityEngine::InputSystem::Utilities::FourCC DetermineFormat() ;

/// @brief Method DetermineUsages addr 0x294a8f4 size 0x190 virtual false final false
 ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> DetermineUsages() ;

/// @brief Method DetermineParameters addr 0x294a11c size 0x170 virtual false final false
 ::StringW DetermineParameters() ;

/// @brief Method DetermineAxisNormalizationParameters addr 0x294b33c size 0x1c8 virtual false final false
 ::StringW DetermineAxisNormalizationParameters() ;

/// @brief Method DetermineProcessors addr 0x294a360 size 0x70 virtual false final false
 ::StringW DetermineProcessors() ;

/// @brief Method DetermineDefaultState addr 0x294a298 size 0xc8 virtual false final false
 UnityEngine::InputSystem::Utilities::PrimitiveValue DetermineDefaultState() ;

/// @brief Method AddChildControls addr 0x294aa84 size 0x65c virtual false final false
 void AddChildControls(ByRef<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> element, ::StringW controlName, ByRef<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder> builder) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: ::HIDCollectionDescriptor
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6480))
// CS Name: UnityEngine.InputSystem.HID.HID::HIDCollectionDescriptor
struct CORDL_TYPE UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "type", ty: "UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionType", modifiers: "", def_value: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usagePage", ty: "UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "childCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstChild", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionType type, int32_t usage, UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage usagePage, int32_t parent, int32_t childCount, int32_t firstChild) noexcept;


                    constexpr UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor(UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor const&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor(UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor&&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor& operator=(UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor& operator=(UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionType value) ;

constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionType __get_type() const;

 int32_t __declspec(property(get=__get_usage, put=__set_usage))  usage;

constexpr void __set_usage(int32_t value) ;

constexpr int32_t __get_usage() const;

 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage __declspec(property(get=__get_usagePage, put=__set_usagePage))  usagePage;

constexpr void __set_usagePage(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage value) ;

constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage __get_usagePage() const;

 int32_t __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(int32_t value) ;

constexpr int32_t __get_parent() const;

 int32_t __declspec(property(get=__get_childCount, put=__set_childCount))  childCount;

constexpr void __set_childCount(int32_t value) ;

constexpr int32_t __get_childCount() const;

 int32_t __declspec(property(get=__get_firstChild, put=__set_firstChild))  firstChild;

constexpr void __set_firstChild(int32_t value) ;

constexpr int32_t __get_firstChild() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: ::HIDDeviceDescriptor
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6481))
// CS Name: UnityEngine.InputSystem.HID.HID::HIDDeviceDescriptor
struct CORDL_TYPE UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "vendorId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "productId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usagePage", ty: "UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage", modifiers: "", def_value: None }, CppParam { name: "inputReportSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "outputReportSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "featureReportSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "elements", ty: "::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor>", modifiers: "", def_value: None }, CppParam { name: "collections", ty: "::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor>", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor(int32_t vendorId, int32_t productId, int32_t usage, UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage usagePage, int32_t inputReportSize, int32_t outputReportSize, int32_t featureReportSize, ::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> elements, ::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor> collections) noexcept;


                    constexpr UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor(UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor const&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor(UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor&&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor& operator=(UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor& operator=(UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_vendorId, put=__set_vendorId))  vendorId;

constexpr void __set_vendorId(int32_t value) ;

constexpr int32_t __get_vendorId() const;

 int32_t __declspec(property(get=__get_productId, put=__set_productId))  productId;

constexpr void __set_productId(int32_t value) ;

constexpr int32_t __get_productId() const;

 int32_t __declspec(property(get=__get_usage, put=__set_usage))  usage;

constexpr void __set_usage(int32_t value) ;

constexpr int32_t __get_usage() const;

 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage __declspec(property(get=__get_usagePage, put=__set_usagePage))  usagePage;

constexpr void __set_usagePage(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage value) ;

constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage __get_usagePage() const;

 int32_t __declspec(property(get=__get_inputReportSize, put=__set_inputReportSize))  inputReportSize;

constexpr void __set_inputReportSize(int32_t value) ;

constexpr int32_t __get_inputReportSize() const;

 int32_t __declspec(property(get=__get_outputReportSize, put=__set_outputReportSize))  outputReportSize;

constexpr void __set_outputReportSize(int32_t value) ;

constexpr int32_t __get_outputReportSize() const;

 int32_t __declspec(property(get=__get_featureReportSize, put=__set_featureReportSize))  featureReportSize;

constexpr void __set_featureReportSize(int32_t value) ;

constexpr int32_t __get_featureReportSize() const;

 ::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> __get_elements() const;

 ::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor> __declspec(property(get=__get_collections, put=__set_collections))  collections;

constexpr void __set_collections(::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor> __get_collections() const;


// Methods

/// @brief Method ToJson addr 0x29492d0 size 0x70 virtual false final false
 ::StringW ToJson() ;

/// @brief Method FromJson addr 0x2947764 size 0xf28 virtual false final false
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor FromJson(::StringW json) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: ::HIDDeviceDescriptorBuilder
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6482))
// CS Name: UnityEngine.InputSystem.HID.HID::HIDDeviceDescriptorBuilder
struct CORDL_TYPE UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "usagePage", ty: "UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage", modifiers: "", def_value: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentReportId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentReportType", ty: "UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType", modifiers: "", def_value: None }, CppParam { name: "m_CurrentReportOffsetInBits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Elements", ty: "System::Collections::Generic::List_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor>", modifiers: "", def_value: None }, CppParam { name: "m_Collections", ty: "System::Collections::Generic::List_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor>", modifiers: "", def_value: None }, CppParam { name: "m_InputReportSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OutputReportSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_FeatureReportSize", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage usagePage, int32_t usage, int32_t m_CurrentReportId, UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType m_CurrentReportType, int32_t m_CurrentReportOffsetInBits, System::Collections::Generic::List_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> m_Elements, System::Collections::Generic::List_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor> m_Collections, int32_t m_InputReportSize, int32_t m_OutputReportSize, int32_t m_FeatureReportSize) noexcept;


                    constexpr UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder(UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder const&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder(UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder&&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder& operator=(UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder& operator=(UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage __declspec(property(get=__get_usagePage, put=__set_usagePage))  usagePage;

constexpr void __set_usagePage(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage value) ;

constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage __get_usagePage() const;

 int32_t __declspec(property(get=__get_usage, put=__set_usage))  usage;

constexpr void __set_usage(int32_t value) ;

constexpr int32_t __get_usage() const;

 int32_t __declspec(property(get=__get_m_CurrentReportId, put=__set_m_CurrentReportId))  m_CurrentReportId;

constexpr void __set_m_CurrentReportId(int32_t value) ;

constexpr int32_t __get_m_CurrentReportId() const;

 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType __declspec(property(get=__get_m_CurrentReportType, put=__set_m_CurrentReportType))  m_CurrentReportType;

constexpr void __set_m_CurrentReportType(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType value) ;

constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType __get_m_CurrentReportType() const;

 int32_t __declspec(property(get=__get_m_CurrentReportOffsetInBits, put=__set_m_CurrentReportOffsetInBits))  m_CurrentReportOffsetInBits;

constexpr void __set_m_CurrentReportOffsetInBits(int32_t value) ;

constexpr int32_t __get_m_CurrentReportOffsetInBits() const;

 System::Collections::Generic::List_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> __declspec(property(get=__get_m_Elements, put=__set_m_Elements))  m_Elements;

constexpr void __set_m_Elements(System::Collections::Generic::List_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor> __get_m_Elements() const;

 System::Collections::Generic::List_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor> __declspec(property(get=__get_m_Collections, put=__set_m_Collections))  m_Collections;

constexpr void __set_m_Collections(System::Collections::Generic::List_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor> __get_m_Collections() const;

 int32_t __declspec(property(get=__get_m_InputReportSize, put=__set_m_InputReportSize))  m_InputReportSize;

constexpr void __set_m_InputReportSize(int32_t value) ;

constexpr int32_t __get_m_InputReportSize() const;

 int32_t __declspec(property(get=__get_m_OutputReportSize, put=__set_m_OutputReportSize))  m_OutputReportSize;

constexpr void __set_m_OutputReportSize(int32_t value) ;

constexpr int32_t __get_m_OutputReportSize() const;

 int32_t __declspec(property(get=__get_m_FeatureReportSize, put=__set_m_FeatureReportSize))  m_FeatureReportSize;

constexpr void __set_m_FeatureReportSize(int32_t value) ;

constexpr int32_t __get_m_FeatureReportSize() const;


// Methods

/// @brief Method .ctor addr 0x294b504 size 0x18 virtual false final false
 void _ctor(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage usagePage, int32_t usage) ;

/// @brief Method .ctor addr 0x294b51c size 0x1c virtual false final false
 void _ctor(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop usage) ;

/// @brief Method StartReport addr 0x294b538 size 0x28 virtual false final false
 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder StartReport(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType reportType, int32_t reportId) ;

/// @brief Method AddElement addr 0x294b560 size 0x3d4 virtual false final false
 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder AddElement(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage usagePage, int32_t usage, int32_t sizeInBits) ;

/// @brief Method AddElement addr 0x294b934 size 0x48 virtual false final false
 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder AddElement(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop usage, int32_t sizeInBits) ;

/// @brief Method WithPhysicalMinMax addr 0x294b97c size 0x194 virtual false final false
 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder WithPhysicalMinMax(int32_t min, int32_t max) ;

/// @brief Method WithLogicalMinMax addr 0x294bb10 size 0x178 virtual false final false
 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder WithLogicalMinMax(int32_t min, int32_t max) ;

/// @brief Method Finish addr 0x294bc88 size 0xb0 virtual false final false
 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor Finish() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: ::UsagePage
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6483))
// CS Name: UnityEngine.InputSystem.HID.HID::UsagePage
struct CORDL_TYPE UnityEngine__InputSystem__HID__HID__UsagePage : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID__UsagePage(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__HID__HID__UsagePage(UnityEngine__InputSystem__HID__HID__UsagePage const&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__UsagePage(UnityEngine__InputSystem__HID__HID__UsagePage&&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__UsagePage& operator=(UnityEngine__InputSystem__HID__HID__UsagePage const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__HID__HID__UsagePage& operator=(UnityEngine__InputSystem__HID__HID__UsagePage&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__HID__HID__UsagePage(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__HID__HID__UsagePage_Unwrapped : int32_t {
__Undefined = 0,
__GenericDesktop = 1,
__Simulation = 2,
__VRControls = 3,
__SportControls = 4,
__GameControls = 5,
__GenericDeviceControls = 6,
__Keyboard = 7,
__LEDs = 8,
__Button = 9,
__Ordinal = 10,
__Telephony = 11,
__Consumer = 12,
__Digitizer = 13,
__PID = 15,
__Unicode = 16,
__AlphanumericDisplay = 20,
__MedicalInstruments = 64,
__Monitor = 128,
__Power = 132,
__BarCodeScanner = 140,
__MagneticStripeReader = 142,
__Camera = 144,
__Arcade = 145,
__VendorDefined = 65280,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__HID__HID__UsagePage_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__HID__HID__UsagePage_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Undefined offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const Undefined;

/// @brief Field GenericDesktop offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const GenericDesktop;

/// @brief Field Simulation offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const Simulation;

/// @brief Field VRControls offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const VRControls;

/// @brief Field SportControls offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const SportControls;

/// @brief Field GameControls offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const GameControls;

/// @brief Field GenericDeviceControls offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const GenericDeviceControls;

/// @brief Field Keyboard offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const Keyboard;

/// @brief Field LEDs offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const LEDs;

/// @brief Field Button offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const Button;

/// @brief Field Ordinal offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const Ordinal;

/// @brief Field Telephony offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const Telephony;

/// @brief Field Consumer offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const Consumer;

/// @brief Field Digitizer offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const Digitizer;

/// @brief Field PID offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const PID;

/// @brief Field Unicode offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const Unicode;

/// @brief Field AlphanumericDisplay offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const AlphanumericDisplay;

/// @brief Field MedicalInstruments offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const MedicalInstruments;

/// @brief Field Monitor offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const Monitor;

/// @brief Field Power offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const Power;

/// @brief Field BarCodeScanner offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const BarCodeScanner;

/// @brief Field MagneticStripeReader offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const MagneticStripeReader;

/// @brief Field Camera offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const Camera;

/// @brief Field Arcade offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const Arcade;

/// @brief Field VendorDefined offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage const VendorDefined;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: ::GenericDesktop
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6484))
// CS Name: UnityEngine.InputSystem.HID.HID::GenericDesktop
struct CORDL_TYPE UnityEngine__InputSystem__HID__HID__GenericDesktop : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID__GenericDesktop(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__HID__HID__GenericDesktop(UnityEngine__InputSystem__HID__HID__GenericDesktop const&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__GenericDesktop(UnityEngine__InputSystem__HID__HID__GenericDesktop&&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__GenericDesktop& operator=(UnityEngine__InputSystem__HID__HID__GenericDesktop const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__HID__HID__GenericDesktop& operator=(UnityEngine__InputSystem__HID__HID__GenericDesktop&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__HID__HID__GenericDesktop(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__HID__HID__GenericDesktop_Unwrapped : int32_t {
__Undefined = 0,
__Pointer = 1,
__Mouse = 2,
__Joystick = 4,
__Gamepad = 5,
__Keyboard = 6,
__Keypad = 7,
__MultiAxisController = 8,
__TabletPCControls = 9,
__AssistiveControl = 10,
__X = 48,
__Y = 49,
__Z = 50,
__Rx = 51,
__Ry = 52,
__Rz = 53,
__Slider = 54,
__Dial = 55,
__Wheel = 56,
__HatSwitch = 57,
__CountedBuffer = 58,
__ByteCount = 59,
__MotionWakeup = 60,
__Start = 61,
__Select = 62,
__Vx = 64,
__Vy = 65,
__Vz = 66,
__Vbrx = 67,
__Vbry = 68,
__Vbrz = 69,
__Vno = 70,
__FeatureNotification = 71,
__ResolutionMultiplier = 72,
__SystemControl = 128,
__SystemPowerDown = 129,
__SystemSleep = 130,
__SystemWakeUp = 131,
__SystemContextMenu = 132,
__SystemMainMenu = 133,
__SystemAppMenu = 134,
__SystemMenuHelp = 135,
__SystemMenuExit = 136,
__SystemMenuSelect = 137,
__SystemMenuRight = 138,
__SystemMenuLeft = 139,
__SystemMenuUp = 140,
__SystemMenuDown = 141,
__SystemColdRestart = 142,
__SystemWarmRestart = 143,
__DpadUp = 144,
__DpadDown = 145,
__DpadRight = 146,
__DpadLeft = 147,
__SystemDock = 160,
__SystemUndock = 161,
__SystemSetup = 162,
__SystemBreak = 163,
__SystemDebuggerBreak = 164,
__ApplicationBreak = 165,
__ApplicationDebuggerBreak = 166,
__SystemSpeakerMute = 167,
__SystemHibernate = 168,
__SystemDisplayInvert = 176,
__SystemDisplayInternal = 177,
__SystemDisplayExternal = 178,
__SystemDisplayBoth = 179,
__SystemDisplayDual = 180,
__SystemDisplayToggleIntExt = 181,
__SystemDisplaySwapPrimarySecondary = 182,
__SystemDisplayLCDAutoScale = 183,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__HID__HID__GenericDesktop_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__HID__HID__GenericDesktop_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Undefined offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Undefined;

/// @brief Field Pointer offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Pointer;

/// @brief Field Mouse offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Mouse;

/// @brief Field Joystick offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Joystick;

/// @brief Field Gamepad offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Gamepad;

/// @brief Field Keyboard offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Keyboard;

/// @brief Field Keypad offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Keypad;

/// @brief Field MultiAxisController offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const MultiAxisController;

/// @brief Field TabletPCControls offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const TabletPCControls;

/// @brief Field AssistiveControl offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const AssistiveControl;

/// @brief Field X offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const X;

/// @brief Field Y offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Y;

/// @brief Field Z offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Z;

/// @brief Field Rx offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Rx;

/// @brief Field Ry offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Ry;

/// @brief Field Rz offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Rz;

/// @brief Field Slider offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Slider;

/// @brief Field Dial offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Dial;

/// @brief Field Wheel offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Wheel;

/// @brief Field HatSwitch offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const HatSwitch;

/// @brief Field CountedBuffer offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const CountedBuffer;

/// @brief Field ByteCount offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const ByteCount;

/// @brief Field MotionWakeup offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const MotionWakeup;

/// @brief Field Start offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Start;

/// @brief Field Select offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Select;

/// @brief Field Vx offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Vx;

/// @brief Field Vy offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Vy;

/// @brief Field Vz offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Vz;

/// @brief Field Vbrx offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Vbrx;

/// @brief Field Vbry offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Vbry;

/// @brief Field Vbrz offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Vbrz;

/// @brief Field Vno offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const Vno;

/// @brief Field FeatureNotification offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const FeatureNotification;

/// @brief Field ResolutionMultiplier offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const ResolutionMultiplier;

/// @brief Field SystemControl offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemControl;

/// @brief Field SystemPowerDown offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemPowerDown;

/// @brief Field SystemSleep offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemSleep;

/// @brief Field SystemWakeUp offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemWakeUp;

/// @brief Field SystemContextMenu offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemContextMenu;

/// @brief Field SystemMainMenu offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemMainMenu;

/// @brief Field SystemAppMenu offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemAppMenu;

/// @brief Field SystemMenuHelp offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemMenuHelp;

/// @brief Field SystemMenuExit offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemMenuExit;

/// @brief Field SystemMenuSelect offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemMenuSelect;

/// @brief Field SystemMenuRight offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemMenuRight;

/// @brief Field SystemMenuLeft offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemMenuLeft;

/// @brief Field SystemMenuUp offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemMenuUp;

/// @brief Field SystemMenuDown offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemMenuDown;

/// @brief Field SystemColdRestart offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemColdRestart;

/// @brief Field SystemWarmRestart offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemWarmRestart;

/// @brief Field DpadUp offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const DpadUp;

/// @brief Field DpadDown offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const DpadDown;

/// @brief Field DpadRight offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const DpadRight;

/// @brief Field DpadLeft offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const DpadLeft;

/// @brief Field SystemDock offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemDock;

/// @brief Field SystemUndock offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemUndock;

/// @brief Field SystemSetup offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemSetup;

/// @brief Field SystemBreak offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemBreak;

/// @brief Field SystemDebuggerBreak offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemDebuggerBreak;

/// @brief Field ApplicationBreak offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const ApplicationBreak;

/// @brief Field ApplicationDebuggerBreak offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const ApplicationDebuggerBreak;

/// @brief Field SystemSpeakerMute offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemSpeakerMute;

/// @brief Field SystemHibernate offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemHibernate;

/// @brief Field SystemDisplayInvert offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemDisplayInvert;

/// @brief Field SystemDisplayInternal offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemDisplayInternal;

/// @brief Field SystemDisplayExternal offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemDisplayExternal;

/// @brief Field SystemDisplayBoth offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemDisplayBoth;

/// @brief Field SystemDisplayDual offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemDisplayDual;

/// @brief Field SystemDisplayToggleIntExt offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemDisplayToggleIntExt;

/// @brief Field SystemDisplaySwapPrimarySecondary offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemDisplaySwapPrimarySecondary;

/// @brief Field SystemDisplayLCDAutoScale offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop const SystemDisplayLCDAutoScale;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: ::Simulation
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6485))
// CS Name: UnityEngine.InputSystem.HID.HID::Simulation
struct CORDL_TYPE UnityEngine__InputSystem__HID__HID__Simulation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID__Simulation(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__HID__HID__Simulation(UnityEngine__InputSystem__HID__HID__Simulation const&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__Simulation(UnityEngine__InputSystem__HID__HID__Simulation&&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__Simulation& operator=(UnityEngine__InputSystem__HID__HID__Simulation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__HID__HID__Simulation& operator=(UnityEngine__InputSystem__HID__HID__Simulation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__HID__HID__Simulation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__HID__HID__Simulation_Unwrapped : int32_t {
__Undefined = 0,
__FlightSimulationDevice = 1,
__AutomobileSimulationDevice = 2,
__TankSimulationDevice = 3,
__SpaceshipSimulationDevice = 4,
__SubmarineSimulationDevice = 5,
__SailingSimulationDevice = 6,
__MotorcycleSimulationDevice = 7,
__SportsSimulationDevice = 8,
__AirplaneSimulationDevice = 9,
__HelicopterSimulationDevice = 10,
__MagicCarpetSimulationDevice = 11,
__BicylcleSimulationDevice = 12,
__FlightControlStick = 32,
__FlightStick = 33,
__CyclicControl = 34,
__CyclicTrim = 35,
__FlightYoke = 36,
__TrackControl = 37,
__Aileron = 176,
__AileronTrim = 177,
__AntiTorqueControl = 178,
__AutopilotEnable = 179,
__ChaffRelease = 180,
__CollectiveControl = 181,
__DiveBreak = 182,
__ElectronicCountermeasures = 183,
__Elevator = 184,
__ElevatorTrim = 185,
__Rudder = 186,
__Throttle = 187,
__FlightCommunications = 188,
__FlareRelease = 189,
__LandingGear = 190,
__ToeBreak = 191,
__Trigger = 192,
__WeaponsArm = 193,
__WeaponsSelect = 194,
__WingFlaps = 195,
__Accelerator = 196,
__Brake = 197,
__Clutch = 198,
__Shifter = 199,
__Steering = 200,
__TurretDirection = 201,
__BarrelElevation = 202,
__DivePlane = 203,
__Ballast = 204,
__BicycleCrank = 205,
__HandleBars = 206,
__FrontBrake = 207,
__RearBrake = 208,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__HID__HID__Simulation_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__HID__HID__Simulation_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Undefined offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const Undefined;

/// @brief Field FlightSimulationDevice offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const FlightSimulationDevice;

/// @brief Field AutomobileSimulationDevice offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const AutomobileSimulationDevice;

/// @brief Field TankSimulationDevice offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const TankSimulationDevice;

/// @brief Field SpaceshipSimulationDevice offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const SpaceshipSimulationDevice;

/// @brief Field SubmarineSimulationDevice offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const SubmarineSimulationDevice;

/// @brief Field SailingSimulationDevice offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const SailingSimulationDevice;

/// @brief Field MotorcycleSimulationDevice offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const MotorcycleSimulationDevice;

/// @brief Field SportsSimulationDevice offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const SportsSimulationDevice;

/// @brief Field AirplaneSimulationDevice offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const AirplaneSimulationDevice;

/// @brief Field HelicopterSimulationDevice offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const HelicopterSimulationDevice;

/// @brief Field MagicCarpetSimulationDevice offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const MagicCarpetSimulationDevice;

/// @brief Field BicylcleSimulationDevice offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const BicylcleSimulationDevice;

/// @brief Field FlightControlStick offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const FlightControlStick;

/// @brief Field FlightStick offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const FlightStick;

/// @brief Field CyclicControl offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const CyclicControl;

/// @brief Field CyclicTrim offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const CyclicTrim;

/// @brief Field FlightYoke offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const FlightYoke;

/// @brief Field TrackControl offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const TrackControl;

/// @brief Field Aileron offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const Aileron;

/// @brief Field AileronTrim offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const AileronTrim;

/// @brief Field AntiTorqueControl offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const AntiTorqueControl;

/// @brief Field AutopilotEnable offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const AutopilotEnable;

/// @brief Field ChaffRelease offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const ChaffRelease;

/// @brief Field CollectiveControl offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const CollectiveControl;

/// @brief Field DiveBreak offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const DiveBreak;

/// @brief Field ElectronicCountermeasures offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const ElectronicCountermeasures;

/// @brief Field Elevator offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const Elevator;

/// @brief Field ElevatorTrim offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const ElevatorTrim;

/// @brief Field Rudder offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const Rudder;

/// @brief Field Throttle offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const Throttle;

/// @brief Field FlightCommunications offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const FlightCommunications;

/// @brief Field FlareRelease offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const FlareRelease;

/// @brief Field LandingGear offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const LandingGear;

/// @brief Field ToeBreak offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const ToeBreak;

/// @brief Field Trigger offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const Trigger;

/// @brief Field WeaponsArm offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const WeaponsArm;

/// @brief Field WeaponsSelect offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const WeaponsSelect;

/// @brief Field WingFlaps offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const WingFlaps;

/// @brief Field Accelerator offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const Accelerator;

/// @brief Field Brake offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const Brake;

/// @brief Field Clutch offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const Clutch;

/// @brief Field Shifter offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const Shifter;

/// @brief Field Steering offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const Steering;

/// @brief Field TurretDirection offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const TurretDirection;

/// @brief Field BarrelElevation offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const BarrelElevation;

/// @brief Field DivePlane offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const DivePlane;

/// @brief Field Ballast offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const Ballast;

/// @brief Field BicycleCrank offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const BicycleCrank;

/// @brief Field HandleBars offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const HandleBars;

/// @brief Field FrontBrake offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const FrontBrake;

/// @brief Field RearBrake offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation const RearBrake;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: ::Button
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6486))
// CS Name: UnityEngine.InputSystem.HID.HID::Button
struct CORDL_TYPE UnityEngine__InputSystem__HID__HID__Button : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID__Button(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__HID__HID__Button(UnityEngine__InputSystem__HID__HID__Button const&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__Button(UnityEngine__InputSystem__HID__HID__Button&&) = default;
                    constexpr UnityEngine__InputSystem__HID__HID__Button& operator=(UnityEngine__InputSystem__HID__HID__Button const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__HID__HID__Button& operator=(UnityEngine__InputSystem__HID__HID__Button&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__HID__HID__Button(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__HID__HID__Button_Unwrapped : int32_t {
__Undefined = 0,
__Primary = 1,
__Secondary = 2,
__Tertiary = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__HID__HID__Button_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__HID__HID__Button_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Undefined offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Button const Undefined;

/// @brief Field Primary offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Button const Primary;

/// @brief Field Secondary offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Button const Secondary;

/// @brief Field Tertiary offset 0
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Button const Tertiary;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: ::<>c__DisplayClass12_0
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6487))
// CS Name: UnityEngine.InputSystem.HID.HID::<>c__DisplayClass12_0
class CORDL_TYPE UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0(UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0(UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0& operator=(UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0& operator=(UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder __declspec(property(get=__get_layout, put=__set_layout))  layout;

constexpr void __set_layout(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder value) ;

constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder __get_layout() const;


// Methods

static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0 New_ctor() ;

/// @brief Method .ctor addr 0x2946fbc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <OnFindLayoutForDevice>b__0 addr 0x294bd38 size 0x18 virtual false final false
 UnityEngine::InputSystem::Layouts::InputControlLayout _OnFindLayoutForDevice_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: UnityEngine.InputSystem.HID::HID
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6322))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6488))
// CS Name: UnityEngine.InputSystem.HID.HID
class CORDL_TYPE HID : public UnityEngine::InputSystem::InputDevice {
public:
// Declarations
using __c__DisplayClass12_0 = UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0;

using Button = UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Button;

using Simulation = UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation;

using GenericDesktop = UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop;

using UsagePage = UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage;

using HIDDeviceDescriptorBuilder = UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder;

using HIDDeviceDescriptor = UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor;

using HIDCollectionDescriptor = UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor;

using HIDElementDescriptor = UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor;

using HIDElementFlags = UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementFlags;

using HIDCollectionType = UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionType;

using HIDReportType = UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType;

using HIDLayoutBuilder = UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x190};

virtual ~HID() = default;

// Ctor Parameters [CppParam { name: "", ty: "HID", modifiers: " const&", def_value: None }]
constexpr HID(HID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HID", modifiers: "&&", def_value: None }]
constexpr HID(HID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HID(void* ptr) noexcept : UnityEngine::InputSystem::InputDevice(ptr) {
}


  constexpr HID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HID& operator=(HID&& o) noexcept = default;
  constexpr HID& operator=(HID const& o) noexcept = default;
                


// Fields

/// @brief Field kHIDInterface offset 0
static constexpr ::ConstString  kHIDInterface{u"HID"};

/// @brief Field kHIDNamespace offset 0
static constexpr ::ConstString  kHIDNamespace{u"HID"};

 bool __declspec(property(get=__get_m_HaveParsedHIDDescriptor, put=__set_m_HaveParsedHIDDescriptor))  m_HaveParsedHIDDescriptor;

constexpr void __set_m_HaveParsedHIDDescriptor(bool value) ;

constexpr bool __get_m_HaveParsedHIDDescriptor() const;

 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor __declspec(property(get=__get_m_HIDDescriptor, put=__set_m_HIDDescriptor))  m_HIDDescriptor;

constexpr void __set_m_HIDDescriptor(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor value) ;

constexpr UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor __get_m_HIDDescriptor() const;


// Properties

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_QueryHIDReportDescriptorDeviceCommandType))  QueryHIDReportDescriptorDeviceCommandType;

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_QueryHIDReportDescriptorSizeDeviceCommandType))  QueryHIDReportDescriptorSizeDeviceCommandType;

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_QueryHIDParsedReportDescriptorDeviceCommandType))  QueryHIDParsedReportDescriptorDeviceCommandType;

 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor __declspec(property(get=get_hidDescriptor))  hidDescriptor;


// Methods

/// @brief Method get_QueryHIDReportDescriptorDeviceCommandType addr 0x2946540 size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_QueryHIDReportDescriptorDeviceCommandType() ;

/// @brief Method get_QueryHIDReportDescriptorSizeDeviceCommandType addr 0x2946570 size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_QueryHIDReportDescriptorSizeDeviceCommandType() ;

/// @brief Method get_QueryHIDParsedReportDescriptorDeviceCommandType addr 0x29465a0 size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_QueryHIDParsedReportDescriptorDeviceCommandType() ;

/// @brief Method get_hidDescriptor addr 0x29465d0 size 0xa4 virtual false final false
 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor get_hidDescriptor() ;

/// @brief Method OnFindLayoutForDevice addr 0x2946674 size 0x948 virtual false final false
static ::StringW OnFindLayoutForDevice(ByRef<UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout, UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate executeDeviceCommand) ;

/// @brief Method ReadHIDDeviceDescriptor addr 0x2946fc4 size 0x6f8 virtual false final false
static UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor ReadHIDDeviceDescriptor(ByRef<UnityEngine::InputSystem::Layouts::InputDeviceDescription> deviceDescription, UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate executeCommandDelegate) ;

/// @brief Method UsagePageToString addr 0x2949340 size 0x8c virtual false final false
static ::StringW UsagePageToString(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage usagePage) ;

/// @brief Method UsageToString addr 0x29493cc size 0x9c virtual false final false
static ::StringW UsageToString(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage usagePage, int32_t usage) ;

static UnityEngine::InputSystem::HID::HID New_ctor() ;

/// @brief Method .ctor addr 0x2949468 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Button, "UnityEngine.InputSystem.HID", "HID/Button");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__GenericDesktop, "UnityEngine.InputSystem.HID", "HID/GenericDesktop");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionType, "UnityEngine.InputSystem.HID", "HID/HIDCollectionType");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementFlags, "UnityEngine.InputSystem.HID", "HID/HIDElementFlags");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDReportType, "UnityEngine.InputSystem.HID", "HID/HIDReportType");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__Simulation, "UnityEngine.InputSystem.HID", "HID/Simulation");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__UsagePage, "UnityEngine.InputSystem.HID", "HID/UsagePage");
NEED_NO_BOX(GlobalNamespace::UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder____c, "UnityEngine.InputSystem.HID", "HID/HIDLayoutBuilder/<>c");
NEED_NO_BOX(UnityEngine::InputSystem::HID::HID);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::HID::HID, "UnityEngine.InputSystem.HID", "HID");
NEED_NO_BOX(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDLayoutBuilder, "UnityEngine.InputSystem.HID", "HID/HIDLayoutBuilder");
NEED_NO_BOX(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID____c__DisplayClass12_0, "UnityEngine.InputSystem.HID", "HID/<>c__DisplayClass12_0");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDCollectionDescriptor, "UnityEngine.InputSystem.HID", "HID/HIDCollectionDescriptor");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor, "UnityEngine.InputSystem.HID", "HID/HIDDeviceDescriptor");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptorBuilder, "UnityEngine.InputSystem.HID", "HID/HIDDeviceDescriptorBuilder");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HID__HIDElementDescriptor, "UnityEngine.InputSystem.HID", "HID/HIDElementDescriptor");
