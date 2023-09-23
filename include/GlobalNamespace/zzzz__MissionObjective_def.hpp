#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class MissionObjectiveTypeSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__MissionObjective__ReferenceValueComparisonType;
}
namespace GlobalNamespace {
class MissionObjective;
}
// Type: ::ReferenceValueComparisonType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4468))
// CS Name: MissionObjective::ReferenceValueComparisonType
struct CORDL_TYPE GlobalNamespace__MissionObjective__ReferenceValueComparisonType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MissionObjective__ReferenceValueComparisonType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__MissionObjective__ReferenceValueComparisonType(GlobalNamespace__MissionObjective__ReferenceValueComparisonType const&) = default;
                    constexpr GlobalNamespace__MissionObjective__ReferenceValueComparisonType(GlobalNamespace__MissionObjective__ReferenceValueComparisonType&&) = default;
                    constexpr GlobalNamespace__MissionObjective__ReferenceValueComparisonType& operator=(GlobalNamespace__MissionObjective__ReferenceValueComparisonType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MissionObjective__ReferenceValueComparisonType& operator=(GlobalNamespace__MissionObjective__ReferenceValueComparisonType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionObjective__ReferenceValueComparisonType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__MissionObjective__ReferenceValueComparisonType_Unwrapped : int32_t {
__None = 0,
__Equal = 1,
__Max = 2,
__Min = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__MissionObjective__ReferenceValueComparisonType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__MissionObjective__ReferenceValueComparisonType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__MissionObjective__ReferenceValueComparisonType const None;

/// @brief Field Equal offset 0
static GlobalNamespace::GlobalNamespace__MissionObjective__ReferenceValueComparisonType const Equal;

/// @brief Field Max offset 0
static GlobalNamespace::GlobalNamespace__MissionObjective__ReferenceValueComparisonType const Max;

/// @brief Field Min offset 0
static GlobalNamespace::GlobalNamespace__MissionObjective__ReferenceValueComparisonType const Min;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MissionObjective
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4469))
// CS Name: MissionObjective
class CORDL_TYPE MissionObjective : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ReferenceValueComparisonType = GlobalNamespace::GlobalNamespace__MissionObjective__ReferenceValueComparisonType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MissionObjective() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjective", modifiers: " const&", def_value: None }]
constexpr MissionObjective(MissionObjective const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjective", modifiers: "&&", def_value: None }]
constexpr MissionObjective(MissionObjective&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionObjective(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MissionObjective& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionObjective& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionObjective& operator=(MissionObjective&& o) noexcept = default;
  constexpr MissionObjective& operator=(MissionObjective const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionObjectiveTypeSO __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(GlobalNamespace::MissionObjectiveTypeSO value) ;

constexpr GlobalNamespace::MissionObjectiveTypeSO __get__type() const;

 GlobalNamespace::GlobalNamespace__MissionObjective__ReferenceValueComparisonType __declspec(property(get=__get__referenceValueComparisonType, put=__set__referenceValueComparisonType))  _referenceValueComparisonType;

constexpr void __set__referenceValueComparisonType(GlobalNamespace::GlobalNamespace__MissionObjective__ReferenceValueComparisonType value) ;

constexpr GlobalNamespace::GlobalNamespace__MissionObjective__ReferenceValueComparisonType __get__referenceValueComparisonType() const;

 int32_t __declspec(property(get=__get__referenceValue, put=__set__referenceValue))  _referenceValue;

constexpr void __set__referenceValue(int32_t value) ;

constexpr int32_t __get__referenceValue() const;


// Properties

 GlobalNamespace::MissionObjectiveTypeSO __declspec(property(get=get_type))  type;

 GlobalNamespace::GlobalNamespace__MissionObjective__ReferenceValueComparisonType __declspec(property(get=get_referenceValueComparisonType))  referenceValueComparisonType;

 int32_t __declspec(property(get=get_referenceValue))  referenceValue;


// Methods

/// @brief Method get_type addr 0x21f0edc size 0x8 virtual false final false
 GlobalNamespace::MissionObjectiveTypeSO get_type() ;

/// @brief Method get_referenceValueComparisonType addr 0x21f0ee4 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__MissionObjective__ReferenceValueComparisonType get_referenceValueComparisonType() ;

/// @brief Method get_referenceValue addr 0x21f0eec size 0x8 virtual false final false
 int32_t get_referenceValue() ;

/// @brief Method op_Equality addr 0x21f0ef4 size 0xbc virtual false final false
static bool op_Equality(GlobalNamespace::MissionObjective obj1, GlobalNamespace::MissionObjective obj2) ;

/// @brief Method op_Inequality addr 0x21f0fb0 size 0x18 virtual false final false
static bool op_Inequality(GlobalNamespace::MissionObjective obj1, GlobalNamespace::MissionObjective obj2) ;

/// @brief Method Equals addr 0x21f0fc8 size 0x10c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x21f10d4 size 0x64 virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit MissionObjective() ;

/// @brief Method .ctor addr 0x21f1138 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionObjective__ReferenceValueComparisonType, "", "MissionObjective/ReferenceValueComparisonType");
NEED_NO_BOX(GlobalNamespace::MissionObjective);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjective, "", "MissionObjective");
