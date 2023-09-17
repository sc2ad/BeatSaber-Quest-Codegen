#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HMUI {
struct ____HMUI__TimeSlider__TimeType;
}
namespace HMUI {
class TimeSlider;
}
// Type: ::TimeType
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13614))
// CS Name: HMUI.TimeSlider::TimeType
struct CORDL_TYPE ____HMUI__TimeSlider__TimeType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____HMUI__TimeSlider__TimeType(int32_t value__) noexcept;


                    constexpr ____HMUI__TimeSlider__TimeType(____HMUI__TimeSlider__TimeType const&) = default;
                    constexpr ____HMUI__TimeSlider__TimeType(____HMUI__TimeSlider__TimeType&&) = default;
                    constexpr ____HMUI__TimeSlider__TimeType& operator=(____HMUI__TimeSlider__TimeType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____HMUI__TimeSlider__TimeType& operator=(____HMUI__TimeSlider__TimeType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____HMUI__TimeSlider__TimeType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______HMUI__TimeSlider__TimeType_Unwrapped : int32_t {
__Default = 0,
__Miliseconds = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______HMUI__TimeSlider__TimeType_Unwrapped () const noexcept {
return std::bit_cast<______HMUI__TimeSlider__TimeType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static ::HMUI::____HMUI__TimeSlider__TimeType const Default;

/// @brief Field Miliseconds offset 0
static ::HMUI::____HMUI__TimeSlider__TimeType const Miliseconds;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::TimeSlider
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13615))
// CS Name: HMUI.TimeSlider
class CORDL_TYPE TimeSlider : public ::HMUI::RangeValuesTextSlider {
public:
// Declarations
using TimeType = ::HMUI::____HMUI__TimeSlider__TimeType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x170};

virtual ~TimeSlider() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeSlider", modifiers: " const&", def_value: None }]
constexpr TimeSlider(TimeSlider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeSlider", modifiers: "&&", def_value: None }]
constexpr TimeSlider(TimeSlider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeSlider(void* ptr) noexcept : ::HMUI::RangeValuesTextSlider(ptr) {
}


  constexpr TimeSlider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeSlider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeSlider& operator=(TimeSlider&& o) noexcept = default;
  constexpr TimeSlider& operator=(TimeSlider const& o) noexcept = default;
                


// Fields

 ::HMUI::____HMUI__TimeSlider__TimeType __declspec(property(get=__get__timeType, put=__set__timeType))  _timeType;

constexpr void __set__timeType(::HMUI::____HMUI__TimeSlider__TimeType value) ;

constexpr ::HMUI::____HMUI__TimeSlider__TimeType __get__timeType() const;


// Methods

/// @brief Method TextForValue addr 0x1fb103c size 0x254 virtual true final false
 ::StringW TextForValue(float_t value) ;

// Ctor Parameters []
explicit TimeSlider() ;

/// @brief Method .ctor addr 0x1fb1290 size 0xc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HMUI::____HMUI__TimeSlider__TimeType, "HMUI", "TimeSlider/TimeType");
NEED_NO_BOX(::HMUI::TimeSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TimeSlider, "HMUI", "TimeSlider");
