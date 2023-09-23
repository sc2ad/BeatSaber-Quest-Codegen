#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_AttributeData__AttributeState;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_AttributeData__AttributeType;
}
namespace HoudiniEngineUnity {
class HEU_AttributeData;
}
// Type: ::AttributeType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9602))
// CS Name: HoudiniEngineUnity.HEU_AttributeData::AttributeType
struct CORDL_TYPE HoudiniEngineUnity__HEU_AttributeData__AttributeType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_AttributeData__AttributeType(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_AttributeData__AttributeType(HoudiniEngineUnity__HEU_AttributeData__AttributeType const&) = default;
                    constexpr HoudiniEngineUnity__HEU_AttributeData__AttributeType(HoudiniEngineUnity__HEU_AttributeData__AttributeType&&) = default;
                    constexpr HoudiniEngineUnity__HEU_AttributeData__AttributeType& operator=(HoudiniEngineUnity__HEU_AttributeData__AttributeType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_AttributeData__AttributeType& operator=(HoudiniEngineUnity__HEU_AttributeData__AttributeType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_AttributeData__AttributeType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_AttributeData__AttributeType_Unwrapped : int32_t {
__UNDEFINED = -1,
__BOOL = 0,
__INT = 1,
__FLOAT = 2,
__STRING = 3,
__MAX = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_AttributeData__AttributeType_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_AttributeData__AttributeType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UNDEFINED offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType const UNDEFINED;

/// @brief Field BOOL offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType const BOOL;

/// @brief Field INT offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType const INT;

/// @brief Field FLOAT offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType const FLOAT;

/// @brief Field STRING offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType const STRING;

/// @brief Field MAX offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType const MAX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::AttributeState
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9603))
// CS Name: HoudiniEngineUnity.HEU_AttributeData::AttributeState
struct CORDL_TYPE HoudiniEngineUnity__HEU_AttributeData__AttributeState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_AttributeData__AttributeState(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_AttributeData__AttributeState(HoudiniEngineUnity__HEU_AttributeData__AttributeState const&) = default;
                    constexpr HoudiniEngineUnity__HEU_AttributeData__AttributeState(HoudiniEngineUnity__HEU_AttributeData__AttributeState&&) = default;
                    constexpr HoudiniEngineUnity__HEU_AttributeData__AttributeState& operator=(HoudiniEngineUnity__HEU_AttributeData__AttributeState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_AttributeData__AttributeState& operator=(HoudiniEngineUnity__HEU_AttributeData__AttributeState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_AttributeData__AttributeState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_AttributeData__AttributeState_Unwrapped : int32_t {
__INVALID = 0,
__SYNCED = 1,
__LOCAL_DIRTY = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_AttributeData__AttributeState_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_AttributeData__AttributeState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field INVALID offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState const INVALID;

/// @brief Field SYNCED offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState const SYNCED;

/// @brief Field LOCAL_DIRTY offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState const LOCAL_DIRTY;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_AttributeData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9604))
// CS Name: HoudiniEngineUnity.HEU_AttributeData
class CORDL_TYPE HEU_AttributeData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using AttributeState = HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState;

using AttributeType = HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_AttributeData>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_AttributeData>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~HEU_AttributeData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AttributeData", modifiers: " const&", def_value: None }]
constexpr HEU_AttributeData(HEU_AttributeData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AttributeData", modifiers: "&&", def_value: None }]
constexpr HEU_AttributeData(HEU_AttributeData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_AttributeData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_AttributeData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_AttributeData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_AttributeData& operator=(HEU_AttributeData&& o) noexcept = default;
  constexpr HEU_AttributeData& operator=(HEU_AttributeData const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HAPI_AttributeInfo __declspec(property(get=__get__attributeInfo, put=__set__attributeInfo))  _attributeInfo;

constexpr void __set__attributeInfo(HoudiniEngineUnity::HAPI_AttributeInfo value) ;

constexpr HoudiniEngineUnity::HAPI_AttributeInfo __get__attributeInfo() const;

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType __declspec(property(get=__get__attributeType, put=__set__attributeType))  _attributeType;

constexpr void __set__attributeType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType __get__attributeType() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__intValues, put=__set__intValues))  _intValues;

constexpr void __set__intValues(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__intValues() const;

 ::ArrayW<float_t> __declspec(property(get=__get__floatValues, put=__set__floatValues))  _floatValues;

constexpr void __set__floatValues(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__floatValues() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__stringValues, put=__set__stringValues))  _stringValues;

constexpr void __set__stringValues(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__stringValues() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState __declspec(property(get=__get__attributeState, put=__set__attributeState))  _attributeState;

constexpr void __set__attributeState(HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState __get__attributeState() const;


// Methods

/// @brief Method IsColorAttribute addr 0x200bf40 size 0x70 virtual false final false
 bool IsColorAttribute() ;

/// @brief Method CopyValuesTo addr 0x200bfb0 size 0x124 virtual false final false
 void CopyValuesTo(HoudiniEngineUnity::HEU_AttributeData destAttrData) ;

/// @brief Method IsEquivalentTo addr 0x200c0d4 size 0x328 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_AttributeData other) ;

// Ctor Parameters []
explicit HEU_AttributeData() ;

/// @brief Method .ctor addr 0x200c3fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState, "HoudiniEngineUnity", "HEU_AttributeData/AttributeState");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType, "HoudiniEngineUnity", "HEU_AttributeData/AttributeType");
NEED_NO_BOX(HoudiniEngineUnity::HEU_AttributeData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_AttributeData, "HoudiniEngineUnity", "HEU_AttributeData");
