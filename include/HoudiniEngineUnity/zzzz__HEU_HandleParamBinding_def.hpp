#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct ____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType;
}
namespace HoudiniEngineUnity {
class HEU_HandleParamBinding;
}
// Type: ::HEU_HandleParamType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9624))
// CS Name: HoudiniEngineUnity.HEU_HandleParamBinding::HEU_HandleParamType
struct CORDL_TYPE ____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType(int32_t value__) noexcept;


                    constexpr ____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType(____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType const&) = default;
                    constexpr ____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType(____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType&&) = default;
                    constexpr ____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType& operator=(____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType& operator=(____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType_Unwrapped : int32_t {
__TRANSLATE = 0,
__ROTATE = 1,
__SCALE = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType_Unwrapped () const noexcept {
return std::bit_cast<______HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TRANSLATE offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType const TRANSLATE;

/// @brief Field ROTATE offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType const ROTATE;

/// @brief Field SCALE offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType const SCALE;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_HandleParamBinding
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9625))
// CS Name: HoudiniEngineUnity.HEU_HandleParamBinding
class CORDL_TYPE HEU_HandleParamBinding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using HEU_HandleParamType = ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType;

/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding>
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_HandleParamBinding() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HandleParamBinding", modifiers: " const&", def_value: None }]
constexpr HEU_HandleParamBinding(HEU_HandleParamBinding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HandleParamBinding", modifiers: "&&", def_value: None }]
constexpr HEU_HandleParamBinding(HEU_HandleParamBinding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_HandleParamBinding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_HandleParamBinding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_HandleParamBinding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_HandleParamBinding& operator=(HEU_HandleParamBinding&& o) noexcept = default;
  constexpr HEU_HandleParamBinding& operator=(HEU_HandleParamBinding const& o) noexcept = default;
                


// Fields

 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType __declspec(property(get=__get__paramType, put=__set__paramType))  _paramType;

constexpr void __set__paramType(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType value) ;

constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType __get__paramType() const;

 int32_t __declspec(property(get=__get__parmID, put=__set__parmID))  _parmID;

constexpr void __set__parmID(int32_t value) ;

constexpr int32_t __get__parmID() const;

 ::StringW __declspec(property(get=__get__paramName, put=__set__paramName))  _paramName;

constexpr void __set__paramName(::StringW value) ;

constexpr ::StringW __get__paramName() const;

 bool __declspec(property(get=__get__bDisabled, put=__set__bDisabled))  _bDisabled;

constexpr void __set__bDisabled(bool value) ;

constexpr bool __get__bDisabled() const;

 ::ArrayW<bool> __declspec(property(get=__get__boundChannels, put=__set__boundChannels))  _boundChannels;

constexpr void __set__boundChannels(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get__boundChannels() const;


// Methods

/// @brief Method IsEquivalentTo addr 0x201ef4c size 0x200 virtual true final true
 bool IsEquivalentTo(::HoudiniEngineUnity::HEU_HandleParamBinding other) ;

// Ctor Parameters []
explicit HEU_HandleParamBinding() ;

/// @brief Method .ctor addr 0x201e02c size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_HandleParamBinding__HEU_HandleParamType, "HoudiniEngineUnity", "HEU_HandleParamBinding/HEU_HandleParamType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HandleParamBinding);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HandleParamBinding, "HoudiniEngineUnity", "HEU_HandleParamBinding");
