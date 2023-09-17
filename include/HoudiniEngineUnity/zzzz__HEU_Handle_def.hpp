#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct HAPI_XYZOrder;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace UnityEngine {
struct Vector3;
}
namespace HoudiniEngineUnity {
struct HAPI_RSTOrder;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
struct Quaternion;
}
namespace HoudiniEngineUnity {
struct HAPI_TransformEuler;
}
namespace HoudiniEngineUnity {
struct HAPI_HandleInfo;
}
namespace HoudiniEngineUnity {
class HEU_Parameters;
}
namespace HoudiniEngineUnity {
class HEU_HandleParamBinding;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct ____HoudiniEngineUnity__HEU_Handle__HEU_HandleType;
}
namespace HoudiniEngineUnity {
class HEU_Handle;
}
// Type: ::HEU_HandleType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9622))
// CS Name: HoudiniEngineUnity.HEU_Handle::HEU_HandleType
struct CORDL_TYPE ____HoudiniEngineUnity__HEU_Handle__HEU_HandleType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____HoudiniEngineUnity__HEU_Handle__HEU_HandleType(int32_t value__) noexcept;


                    constexpr ____HoudiniEngineUnity__HEU_Handle__HEU_HandleType(____HoudiniEngineUnity__HEU_Handle__HEU_HandleType const&) = default;
                    constexpr ____HoudiniEngineUnity__HEU_Handle__HEU_HandleType(____HoudiniEngineUnity__HEU_Handle__HEU_HandleType&&) = default;
                    constexpr ____HoudiniEngineUnity__HEU_Handle__HEU_HandleType& operator=(____HoudiniEngineUnity__HEU_Handle__HEU_HandleType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____HoudiniEngineUnity__HEU_Handle__HEU_HandleType& operator=(____HoudiniEngineUnity__HEU_Handle__HEU_HandleType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____HoudiniEngineUnity__HEU_Handle__HEU_HandleType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______HoudiniEngineUnity__HEU_Handle__HEU_HandleType_Unwrapped : int32_t {
__XFORM = 0,
__UNSUPPORTED = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______HoudiniEngineUnity__HEU_Handle__HEU_HandleType_Unwrapped () const noexcept {
return std::bit_cast<______HoudiniEngineUnity__HEU_Handle__HEU_HandleType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field XFORM offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Handle__HEU_HandleType const XFORM;

/// @brief Field UNSUPPORTED offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Handle__HEU_HandleType const UNSUPPORTED;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_Handle
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9623))
// CS Name: HoudiniEngineUnity.HEU_Handle
class CORDL_TYPE HEU_Handle : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using HEU_HandleType = ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Handle__HEU_HandleType;

/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Handle>
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Handle>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~HEU_Handle() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Handle", modifiers: " const&", def_value: None }]
constexpr HEU_Handle(HEU_Handle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Handle", modifiers: "&&", def_value: None }]
constexpr HEU_Handle(HEU_Handle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_Handle(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr HEU_Handle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_Handle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_Handle& operator=(HEU_Handle&& o) noexcept = default;
  constexpr HEU_Handle& operator=(HEU_Handle const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__handleName, put=__set__handleName))  _handleName;

constexpr void __set__handleName(::StringW value) ;

constexpr ::StringW __get__handleName() const;

 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Handle__HEU_HandleType __declspec(property(get=__get__handleType, put=__set__handleType))  _handleType;

constexpr void __set__handleType(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Handle__HEU_HandleType value) ;

constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Handle__HEU_HandleType __get__handleType() const;

 int32_t __declspec(property(get=__get__handleIndex, put=__set__handleIndex))  _handleIndex;

constexpr void __set__handleIndex(int32_t value) ;

constexpr int32_t __get__handleIndex() const;

 ::HoudiniEngineUnity::HEU_HandleParamBinding __declspec(property(get=__get__handleParamTranslateBinding, put=__set__handleParamTranslateBinding))  _handleParamTranslateBinding;

constexpr void __set__handleParamTranslateBinding(::HoudiniEngineUnity::HEU_HandleParamBinding value) ;

constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding __get__handleParamTranslateBinding() const;

 ::HoudiniEngineUnity::HEU_HandleParamBinding __declspec(property(get=__get__handleParamRotateBinding, put=__set__handleParamRotateBinding))  _handleParamRotateBinding;

constexpr void __set__handleParamRotateBinding(::HoudiniEngineUnity::HEU_HandleParamBinding value) ;

constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding __get__handleParamRotateBinding() const;

 ::HoudiniEngineUnity::HEU_HandleParamBinding __declspec(property(get=__get__handleParamScaleBinding, put=__set__handleParamScaleBinding))  _handleParamScaleBinding;

constexpr void __set__handleParamScaleBinding(::HoudiniEngineUnity::HEU_HandleParamBinding value) ;

constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding __get__handleParamScaleBinding() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__handlePosition, put=__set__handlePosition))  _handlePosition;

constexpr void __set__handlePosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__handlePosition() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get__handleRotation, put=__set__handleRotation))  _handleRotation;

constexpr void __set__handleRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get__handleRotation() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__handleScale, put=__set__handleScale))  _handleScale;

constexpr void __set__handleScale(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__handleScale() const;

 ::HoudiniEngineUnity::HAPI_RSTOrder __declspec(property(get=__get__rstOrder, put=__set__rstOrder))  _rstOrder;

constexpr void __set__rstOrder(::HoudiniEngineUnity::HAPI_RSTOrder value) ;

constexpr ::HoudiniEngineUnity::HAPI_RSTOrder __get__rstOrder() const;

 ::HoudiniEngineUnity::HAPI_XYZOrder __declspec(property(get=__get__xyzOrder, put=__set__xyzOrder))  _xyzOrder;

constexpr void __set__xyzOrder(::HoudiniEngineUnity::HAPI_XYZOrder value) ;

constexpr ::HoudiniEngineUnity::HAPI_XYZOrder __get__xyzOrder() const;

 ::HoudiniEngineUnity::HAPI_TransformEuler __declspec(property(get=__get__convertedTransformEuler, put=__set__convertedTransformEuler))  _convertedTransformEuler;

constexpr void __set__convertedTransformEuler(::HoudiniEngineUnity::HAPI_TransformEuler value) ;

constexpr ::HoudiniEngineUnity::HAPI_TransformEuler __get__convertedTransformEuler() const;


// Properties

 ::StringW __declspec(property(get=get_HandleName))  HandleName;

 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Handle__HEU_HandleType __declspec(property(get=get_HandleType))  HandleType;

 ::HoudiniEngineUnity::HAPI_RSTOrder __declspec(property(get=get_RSTOrder))  RSTOrder;

 ::HoudiniEngineUnity::HAPI_XYZOrder __declspec(property(get=get_XYZOrder))  XYZOrder;

 ::HoudiniEngineUnity::HAPI_TransformEuler __declspec(property(get=get_ConvertedTransformEuler))  ConvertedTransformEuler;

 ::UnityEngine::Vector3 __declspec(property(get=get_HandlePosition))  HandlePosition;

 ::UnityEngine::Quaternion __declspec(property(get=get_HandleRotation))  HandleRotation;

 ::UnityEngine::Vector3 __declspec(property(get=get_HandleScale))  HandleScale;


// Methods

/// @brief Method get_HandleName addr 0x201d5fc size 0x8 virtual false final false
 ::StringW get_HandleName() ;

/// @brief Method get_HandleType addr 0x201d604 size 0x8 virtual false final false
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Handle__HEU_HandleType get_HandleType() ;

/// @brief Method get_RSTOrder addr 0x201d60c size 0x8 virtual false final false
 ::HoudiniEngineUnity::HAPI_RSTOrder get_RSTOrder() ;

/// @brief Method get_XYZOrder addr 0x201d614 size 0x8 virtual false final false
 ::HoudiniEngineUnity::HAPI_XYZOrder get_XYZOrder() ;

/// @brief Method get_ConvertedTransformEuler addr 0x201d61c size 0x14 virtual false final false
 ::HoudiniEngineUnity::HAPI_TransformEuler get_ConvertedTransformEuler() ;

/// @brief Method HasTranslateHandle addr 0x201d630 size 0x10 virtual false final false
 bool HasTranslateHandle() ;

/// @brief Method HasRotateHandle addr 0x201d640 size 0x10 virtual false final false
 bool HasRotateHandle() ;

/// @brief Method HasScaleHandle addr 0x201d650 size 0x10 virtual false final false
 bool HasScaleHandle() ;

/// @brief Method IsTranslateHandleDisabled addr 0x201d660 size 0x20 virtual false final false
 bool IsTranslateHandleDisabled() ;

/// @brief Method IsRotateHandleDisabled addr 0x201d680 size 0x20 virtual false final false
 bool IsRotateHandleDisabled() ;

/// @brief Method IsScaleHandleDisabled addr 0x201d6a0 size 0x20 virtual false final false
 bool IsScaleHandleDisabled() ;

/// @brief Method GetTranslateBinding addr 0x201d6c0 size 0x8 virtual false final false
 ::HoudiniEngineUnity::HEU_HandleParamBinding GetTranslateBinding() ;

/// @brief Method GetRotateBinding addr 0x201d6c8 size 0x8 virtual false final false
 ::HoudiniEngineUnity::HEU_HandleParamBinding GetRotateBinding() ;

/// @brief Method GetScaleBinding addr 0x201d6d0 size 0x8 virtual false final false
 ::HoudiniEngineUnity::HEU_HandleParamBinding GetScaleBinding() ;

/// @brief Method get_HandlePosition addr 0x201d6d8 size 0xc virtual false final false
 ::UnityEngine::Vector3 get_HandlePosition() ;

/// @brief Method get_HandleRotation addr 0x201d6e4 size 0xc virtual false final false
 ::UnityEngine::Quaternion get_HandleRotation() ;

/// @brief Method get_HandleScale addr 0x201d6f0 size 0xc virtual false final false
 ::UnityEngine::Vector3 get_HandleScale() ;

/// @brief Method SetupHandle addr 0x201d6fc size 0x7cc virtual false final false
 bool SetupHandle(::HoudiniEngineUnity::HEU_SessionBase session, int32_t assetID, int32_t handleIndex, ::StringW handleName, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Handle__HEU_HandleType handleType, ByRef<::HoudiniEngineUnity::HAPI_HandleInfo> handleInfo, ::HoudiniEngineUnity::HEU_Parameters parameters) ;

/// @brief Method CleanUp addr 0x201e5fc size 0xc virtual false final false
 void CleanUp() ;

/// @brief Method GenerateTransform addr 0x201e110 size 0x4ec virtual false final false
 void GenerateTransform(::HoudiniEngineUnity::HEU_SessionBase session, ::HoudiniEngineUnity::HEU_Parameters parameters) ;

/// @brief Method GetUpdatedPosition addr 0x201e620 size 0x160 virtual false final false
 bool GetUpdatedPosition(::HoudiniEngineUnity::HEU_HoudiniAsset asset, ByRef<::UnityEngine::Vector3> inPosition) ;

/// @brief Method GetUpdatedRotation addr 0x201e780 size 0x1fc virtual false final false
 bool GetUpdatedRotation(::HoudiniEngineUnity::HEU_HoudiniAsset asset, ByRef<::UnityEngine::Quaternion> inRotation) ;

/// @brief Method IsSpecialRSTOrder addr 0x201e608 size 0x18 virtual false final false
static bool IsSpecialRSTOrder(::HoudiniEngineUnity::HAPI_RSTOrder rstOrder) ;

/// @brief Method IsEquivalentTo addr 0x201e97c size 0x4fc virtual true final true
 bool IsEquivalentTo(::HoudiniEngineUnity::HEU_Handle other) ;

// Ctor Parameters []
explicit HEU_Handle() ;

/// @brief Method .ctor addr 0x201ee78 size 0xd4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_Handle__HEU_HandleType, "HoudiniEngineUnity", "HEU_Handle/HEU_HandleType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Handle);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Handle, "HoudiniEngineUnity", "HEU_Handle");
