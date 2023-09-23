#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class FloatSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__FormattedFloatListSettingsValueController__ValueType;
}
namespace GlobalNamespace {
class FormattedFloatListSettingsValueController;
}
// Type: ::ValueType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5682))
// CS Name: FormattedFloatListSettingsValueController::ValueType
struct CORDL_TYPE GlobalNamespace__FormattedFloatListSettingsValueController__ValueType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__FormattedFloatListSettingsValueController__ValueType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__FormattedFloatListSettingsValueController__ValueType(GlobalNamespace__FormattedFloatListSettingsValueController__ValueType const&) = default;
                    constexpr GlobalNamespace__FormattedFloatListSettingsValueController__ValueType(GlobalNamespace__FormattedFloatListSettingsValueController__ValueType&&) = default;
                    constexpr GlobalNamespace__FormattedFloatListSettingsValueController__ValueType& operator=(GlobalNamespace__FormattedFloatListSettingsValueController__ValueType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__FormattedFloatListSettingsValueController__ValueType& operator=(GlobalNamespace__FormattedFloatListSettingsValueController__ValueType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FormattedFloatListSettingsValueController__ValueType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__FormattedFloatListSettingsValueController__ValueType_Unwrapped : int32_t {
__Normal = 0,
__Normalized = 1,
__InvertedNormalized = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__FormattedFloatListSettingsValueController__ValueType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__FormattedFloatListSettingsValueController__ValueType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsValueController__ValueType const Normal;

/// @brief Field Normalized offset 0
static GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsValueController__ValueType const Normalized;

/// @brief Field InvertedNormalized offset 0
static GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsValueController__ValueType const InvertedNormalized;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FormattedFloatListSettingsValueController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5683))
// CS Name: FormattedFloatListSettingsValueController
class CORDL_TYPE FormattedFloatListSettingsValueController : public GlobalNamespace::ListSettingsController {
public:
// Declarations
using ValueType = GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsValueController__ValueType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~FormattedFloatListSettingsValueController() = default;

// Ctor Parameters [CppParam { name: "", ty: "FormattedFloatListSettingsValueController", modifiers: " const&", def_value: None }]
constexpr FormattedFloatListSettingsValueController(FormattedFloatListSettingsValueController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FormattedFloatListSettingsValueController", modifiers: "&&", def_value: None }]
constexpr FormattedFloatListSettingsValueController(FormattedFloatListSettingsValueController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FormattedFloatListSettingsValueController(void* ptr) noexcept : GlobalNamespace::ListSettingsController(ptr) {
}


  constexpr FormattedFloatListSettingsValueController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FormattedFloatListSettingsValueController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FormattedFloatListSettingsValueController& operator=(FormattedFloatListSettingsValueController&& o) noexcept = default;
  constexpr FormattedFloatListSettingsValueController& operator=(FormattedFloatListSettingsValueController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FloatSO __declspec(property(get=__get__settingsValue, put=__set__settingsValue))  _settingsValue;

constexpr void __set__settingsValue(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get__settingsValue() const;

 ::ArrayW<float_t> __declspec(property(get=__get__values, put=__set__values))  _values;

constexpr void __set__values(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__values() const;

 ::StringW __declspec(property(get=__get__formattingString, put=__set__formattingString))  _formattingString;

constexpr void __set__formattingString(::StringW value) ;

constexpr ::StringW __get__formattingString() const;

 GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsValueController__ValueType __declspec(property(get=__get_valueType, put=__set_valueType))  valueType;

constexpr void __set_valueType(GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsValueController__ValueType value) ;

constexpr GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsValueController__ValueType __get_valueType() const;

 float_t __declspec(property(get=__get__min, put=__set__min))  _min;

constexpr void __set__min(float_t value) ;

constexpr float_t __get__min() const;

 float_t __declspec(property(get=__get__max, put=__set__max))  _max;

constexpr void __set__max(float_t value) ;

constexpr float_t __get__max() const;


// Methods

/// @brief Method GetInitValues addr 0x2152dfc size 0xe0 virtual true final false
 bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) ;

/// @brief Method ApplyValue addr 0x2152edc size 0x74 virtual true final false
 void ApplyValue(int32_t idx) ;

/// @brief Method TextForValue addr 0x2152f50 size 0xdc virtual true final false
 ::StringW TextForValue(int32_t idx) ;

// Ctor Parameters []
explicit FormattedFloatListSettingsValueController() ;

/// @brief Method .ctor addr 0x215302c size 0x5c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsValueController__ValueType, "", "FormattedFloatListSettingsValueController/ValueType");
NEED_NO_BOX(GlobalNamespace::FormattedFloatListSettingsValueController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FormattedFloatListSettingsValueController, "", "FormattedFloatListSettingsValueController");
