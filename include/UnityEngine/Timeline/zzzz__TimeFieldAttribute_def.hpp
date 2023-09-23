#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Timeline {
struct UnityEngine__Timeline__TimeFieldAttribute__UseEditMode;
}
namespace UnityEngine::Timeline {
class TimeFieldAttribute;
}
// Type: ::UseEditMode
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14132))
// CS Name: UnityEngine.Timeline.TimeFieldAttribute::UseEditMode
struct CORDL_TYPE UnityEngine__Timeline__TimeFieldAttribute__UseEditMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Timeline__TimeFieldAttribute__UseEditMode(int32_t value__) noexcept;


                    constexpr UnityEngine__Timeline__TimeFieldAttribute__UseEditMode(UnityEngine__Timeline__TimeFieldAttribute__UseEditMode const&) = default;
                    constexpr UnityEngine__Timeline__TimeFieldAttribute__UseEditMode(UnityEngine__Timeline__TimeFieldAttribute__UseEditMode&&) = default;
                    constexpr UnityEngine__Timeline__TimeFieldAttribute__UseEditMode& operator=(UnityEngine__Timeline__TimeFieldAttribute__UseEditMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Timeline__TimeFieldAttribute__UseEditMode& operator=(UnityEngine__Timeline__TimeFieldAttribute__UseEditMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Timeline__TimeFieldAttribute__UseEditMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Timeline__TimeFieldAttribute__UseEditMode_Unwrapped : int32_t {
__None = 0,
__ApplyEditMode = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Timeline__TimeFieldAttribute__UseEditMode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Timeline__TimeFieldAttribute__UseEditMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimeFieldAttribute__UseEditMode const None;

/// @brief Field ApplyEditMode offset 0
static UnityEngine::Timeline::UnityEngine__Timeline__TimeFieldAttribute__UseEditMode const ApplyEditMode;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::TimeFieldAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14133))
// CS Name: UnityEngine.Timeline.TimeFieldAttribute
class CORDL_TYPE TimeFieldAttribute : public UnityEngine::PropertyAttribute {
public:
// Declarations
using UseEditMode = UnityEngine::Timeline::UnityEngine__Timeline__TimeFieldAttribute__UseEditMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TimeFieldAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeFieldAttribute", modifiers: " const&", def_value: None }]
constexpr TimeFieldAttribute(TimeFieldAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeFieldAttribute", modifiers: "&&", def_value: None }]
constexpr TimeFieldAttribute(TimeFieldAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeFieldAttribute(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr TimeFieldAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeFieldAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeFieldAttribute& operator=(TimeFieldAttribute&& o) noexcept = default;
  constexpr TimeFieldAttribute& operator=(TimeFieldAttribute const& o) noexcept = default;
                


// Fields

 UnityEngine::Timeline::UnityEngine__Timeline__TimeFieldAttribute__UseEditMode __declspec(property(get=__get__useEditMode_k__BackingField, put=__set__useEditMode_k__BackingField))  _useEditMode_k__BackingField;

constexpr void __set__useEditMode_k__BackingField(UnityEngine::Timeline::UnityEngine__Timeline__TimeFieldAttribute__UseEditMode value) ;

constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimeFieldAttribute__UseEditMode __get__useEditMode_k__BackingField() const;


// Properties

 UnityEngine::Timeline::UnityEngine__Timeline__TimeFieldAttribute__UseEditMode __declspec(property(get=get_useEditMode))  useEditMode;


// Methods

/// @brief Method get_useEditMode addr 0x2ad5de4 size 0x8 virtual false final false
 UnityEngine::Timeline::UnityEngine__Timeline__TimeFieldAttribute__UseEditMode get_useEditMode() ;

// Ctor Parameters [CppParam { name: "useEditMode", ty: "UnityEngine::Timeline::UnityEngine__Timeline__TimeFieldAttribute__UseEditMode", modifiers: "", def_value: None }]
explicit TimeFieldAttribute(UnityEngine::Timeline::UnityEngine__Timeline__TimeFieldAttribute__UseEditMode useEditMode) ;

/// @brief Method .ctor addr 0x2ad5dec size 0x28 virtual false final false
 void _ctor(UnityEngine::Timeline::UnityEngine__Timeline__TimeFieldAttribute__UseEditMode useEditMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::UnityEngine__Timeline__TimeFieldAttribute__UseEditMode, "UnityEngine.Timeline", "TimeFieldAttribute/UseEditMode");
NEED_NO_BOX(UnityEngine::Timeline::TimeFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimeFieldAttribute, "UnityEngine.Timeline", "TimeFieldAttribute");
