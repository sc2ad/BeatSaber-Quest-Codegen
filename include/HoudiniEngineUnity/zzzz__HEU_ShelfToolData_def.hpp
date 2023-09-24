#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_ShelfToolData__ToolType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_ShelfToolData__ToolType;
}
namespace HoudiniEngineUnity {
class HEU_ShelfToolData;
}
// Type: ::ToolType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9797))
// CS Name: HoudiniEngineUnity.HEU_ShelfToolData::ToolType
struct CORDL_TYPE HoudiniEngineUnity__HEU_ShelfToolData__ToolType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_ShelfToolData__ToolType(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_ShelfToolData__ToolType(HoudiniEngineUnity__HEU_ShelfToolData__ToolType const&) = default;
                    constexpr HoudiniEngineUnity__HEU_ShelfToolData__ToolType(HoudiniEngineUnity__HEU_ShelfToolData__ToolType&&) = default;
                    constexpr HoudiniEngineUnity__HEU_ShelfToolData__ToolType& operator=(HoudiniEngineUnity__HEU_ShelfToolData__ToolType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_ShelfToolData__ToolType& operator=(HoudiniEngineUnity__HEU_ShelfToolData__ToolType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_ShelfToolData__ToolType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_ShelfToolData__ToolType_Unwrapped : int32_t {
__GENERATOR = 0,
__OPERATOR_SINGLE = 1,
__OPERATOR_MULTI = 2,
__BATCH = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_ShelfToolData__ToolType_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_ShelfToolData__ToolType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field GENERATOR offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType const GENERATOR;

/// @brief Field OPERATOR_SINGLE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType const OPERATOR_SINGLE;

/// @brief Field OPERATOR_MULTI offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType const OPERATOR_MULTI;

/// @brief Field BATCH offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType const BATCH;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_ShelfToolData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9798))
// CS Name: HoudiniEngineUnity.HEU_ShelfToolData
class CORDL_TYPE HEU_ShelfToolData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ToolType = HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HEU_ShelfToolData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ShelfToolData", modifiers: " const&", def_value: None }]
constexpr HEU_ShelfToolData(HEU_ShelfToolData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ShelfToolData", modifiers: "&&", def_value: None }]
constexpr HEU_ShelfToolData(HEU_ShelfToolData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ShelfToolData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_ShelfToolData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ShelfToolData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ShelfToolData& operator=(HEU_ShelfToolData&& o) noexcept = default;
  constexpr HEU_ShelfToolData& operator=(HEU_ShelfToolData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType __declspec(property(get=__get__toolType, put=__set__toolType))  _toolType;

constexpr void __set__toolType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType __get__toolType() const;

 ::StringW __declspec(property(get=__get__toolTip, put=__set__toolTip))  _toolTip;

constexpr void __set__toolTip(::StringW value) ;

constexpr ::StringW __get__toolTip() const;

 ::StringW __declspec(property(get=__get__iconPath, put=__set__iconPath))  _iconPath;

constexpr void __set__iconPath(::StringW value) ;

constexpr ::StringW __get__iconPath() const;

 ::StringW __declspec(property(get=__get__assetPath, put=__set__assetPath))  _assetPath;

constexpr void __set__assetPath(::StringW value) ;

constexpr ::StringW __get__assetPath() const;

 ::StringW __declspec(property(get=__get__helpURL, put=__set__helpURL))  _helpURL;

constexpr void __set__helpURL(::StringW value) ;

constexpr ::StringW __get__helpURL() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__targets, put=__set__targets))  _targets;

constexpr void __set__targets(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__targets() const;

 ::StringW __declspec(property(get=__get__jsonPath, put=__set__jsonPath))  _jsonPath;

constexpr void __set__jsonPath(::StringW value) ;

constexpr ::StringW __get__jsonPath() const;


// Methods

static HoudiniEngineUnity::HEU_ShelfToolData New_ctor() ;

/// @brief Method .ctor addr 0x205ee18 size 0x5c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType, "HoudiniEngineUnity", "HEU_ShelfToolData/ToolType");
NEED_NO_BOX(HoudiniEngineUnity::HEU_ShelfToolData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_ShelfToolData, "HoudiniEngineUnity", "HEU_ShelfToolData");
