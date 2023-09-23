#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GUIContent;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmInfo;
}
namespace UnityEngine {
class Gradient;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
class HEU_InputNode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ParameterData;
}
// Type: HoudiniEngineUnity::HEU_ParameterData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9701))
// CS Name: HoudiniEngineUnity.HEU_ParameterData
class CORDL_TYPE HEU_ParameterData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ParameterData>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ParameterData>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x150};

virtual ~HEU_ParameterData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ParameterData", modifiers: " const&", def_value: None }]
constexpr HEU_ParameterData(HEU_ParameterData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ParameterData", modifiers: "&&", def_value: None }]
constexpr HEU_ParameterData(HEU_ParameterData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ParameterData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_ParameterData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ParameterData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ParameterData& operator=(HEU_ParameterData&& o) noexcept = default;
  constexpr HEU_ParameterData& operator=(HEU_ParameterData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__unityIndex, put=__set__unityIndex))  _unityIndex;

constexpr void __set__unityIndex(int32_t value) ;

constexpr int32_t __get__unityIndex() const;

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 ::StringW __declspec(property(get=__get__labelName, put=__set__labelName))  _labelName;

constexpr void __set__labelName(::StringW value) ;

constexpr ::StringW __get__labelName() const;

 ::StringW __declspec(property(get=__get__help, put=__set__help))  _help;

constexpr void __set__help(::StringW value) ;

constexpr ::StringW __get__help() const;

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get__childParameterIDs, put=__set__childParameterIDs))  _childParameterIDs;

constexpr void __set__childParameterIDs(System::Collections::Generic::List_1<int32_t> value) ;

constexpr System::Collections::Generic::List_1<int32_t> __get__childParameterIDs() const;

 int32_t __declspec(property(get=__get__choiceValue, put=__set__choiceValue))  _choiceValue;

constexpr void __set__choiceValue(int32_t value) ;

constexpr int32_t __get__choiceValue() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__intValues, put=__set__intValues))  _intValues;

constexpr void __set__intValues(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__intValues() const;

 ::ArrayW<float_t> __declspec(property(get=__get__floatValues, put=__set__floatValues))  _floatValues;

constexpr void __set__floatValues(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__floatValues() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__stringValues, put=__set__stringValues))  _stringValues;

constexpr void __set__stringValues(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__stringValues() const;

 bool __declspec(property(get=__get__toggle, put=__set__toggle))  _toggle;

constexpr void __set__toggle(bool value) ;

constexpr bool __get__toggle() const;

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;

 UnityEngine::Gradient __declspec(property(get=__get__gradient, put=__set__gradient))  _gradient;

constexpr void __set__gradient(UnityEngine::Gradient value) ;

constexpr UnityEngine::Gradient __get__gradient() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__animCurve, put=__set__animCurve))  _animCurve;

constexpr void __set__animCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__animCurve() const;

 ::ArrayW<UnityEngine::GUIContent> __declspec(property(get=__get__choiceLabels, put=__set__choiceLabels))  _choiceLabels;

constexpr void __set__choiceLabels(::ArrayW<UnityEngine::GUIContent> value) ;

constexpr ::ArrayW<UnityEngine::GUIContent> __get__choiceLabels() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__choiceStringValues, put=__set__choiceStringValues))  _choiceStringValues;

constexpr void __set__choiceStringValues(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__choiceStringValues() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__choiceIntValues, put=__set__choiceIntValues))  _choiceIntValues;

constexpr void __set__choiceIntValues(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__choiceIntValues() const;

 HoudiniEngineUnity::HAPI_ParmInfo __declspec(property(get=__get__parmInfo, put=__set__parmInfo))  _parmInfo;

constexpr void __set__parmInfo(HoudiniEngineUnity::HAPI_ParmInfo value) ;

constexpr HoudiniEngineUnity::HAPI_ParmInfo __get__parmInfo() const;

 bool __declspec(property(get=__get__showChildren, put=__set__showChildren))  _showChildren;

constexpr void __set__showChildren(bool value) ;

constexpr bool __get__showChildren() const;

 ::StringW __declspec(property(get=__get__fileTypeInfo, put=__set__fileTypeInfo))  _fileTypeInfo;

constexpr void __set__fileTypeInfo(::StringW value) ;

constexpr ::StringW __get__fileTypeInfo() const;

 int32_t __declspec(property(get=__get__folderListChildrenProcessed, put=__set__folderListChildrenProcessed))  _folderListChildrenProcessed;

constexpr void __set__folderListChildrenProcessed(int32_t value) ;

constexpr int32_t __get__folderListChildrenProcessed() const;

 int32_t __declspec(property(get=__get__tabSelectedIndex, put=__set__tabSelectedIndex))  _tabSelectedIndex;

constexpr void __set__tabSelectedIndex(int32_t value) ;

constexpr int32_t __get__tabSelectedIndex() const;

 HoudiniEngineUnity::HEU_InputNode __declspec(property(get=__get__paramInputNode, put=__set__paramInputNode))  _paramInputNode;

constexpr void __set__paramInputNode(HoudiniEngineUnity::HEU_InputNode value) ;

constexpr HoudiniEngineUnity::HEU_InputNode __get__paramInputNode() const;

 bool __declspec(property(get=__get__hasAssetPathTag, put=__set__hasAssetPathTag))  _hasAssetPathTag;

constexpr void __set__hasAssetPathTag(bool value) ;

constexpr bool __get__hasAssetPathTag() const;


// Properties

 int32_t __declspec(property(get=get_ParmID))  ParmID;

 int32_t __declspec(property(get=get_ParentID))  ParentID;

 int32_t __declspec(property(get=get_ChildIndex))  ChildIndex;

 int32_t __declspec(property(get=get_ParmSize))  ParmSize;

 int32_t __declspec(property(get=get_IntMin))  IntMin;

 int32_t __declspec(property(get=get_IntMax))  IntMax;

 int32_t __declspec(property(get=get_IntUIMin))  IntUIMin;

 int32_t __declspec(property(get=get_IntUIMax))  IntUIMax;

 float_t __declspec(property(get=get_FloatMin))  FloatMin;

 float_t __declspec(property(get=get_FloatMax))  FloatMax;

 float_t __declspec(property(get=get_FloatUIMin))  FloatUIMin;

 float_t __declspec(property(get=get_FloatUIMax))  FloatUIMax;


// Methods

/// @brief Method get_ParmID addr 0x201e084 size 0x8 virtual false final false
 int32_t get_ParmID() ;

/// @brief Method get_ParentID addr 0x201f7f8 size 0x8 virtual false final false
 int32_t get_ParentID() ;

/// @brief Method get_ChildIndex addr 0x201f800 size 0x8 virtual false final false
 int32_t get_ChildIndex() ;

/// @brief Method get_ParmSize addr 0x201f808 size 0x8 virtual false final false
 int32_t get_ParmSize() ;

/// @brief Method IsInt addr 0x201f810 size 0x10 virtual false final false
 bool IsInt() ;

/// @brief Method IsFloat addr 0x201f820 size 0x10 virtual false final false
 bool IsFloat() ;

/// @brief Method IsString addr 0x201f830 size 0x10 virtual false final false
 bool IsString() ;

/// @brief Method IsPathFile addr 0x201f840 size 0x14 virtual false final false
 bool IsPathFile() ;

/// @brief Method HasMin addr 0x201f854 size 0x8 virtual false final false
 bool HasMin() ;

/// @brief Method HasMax addr 0x201f85c size 0x8 virtual false final false
 bool HasMax() ;

/// @brief Method HasUIMin addr 0x201f864 size 0x8 virtual false final false
 bool HasUIMin() ;

/// @brief Method HasUIMax addr 0x201f86c size 0x8 virtual false final false
 bool HasUIMax() ;

/// @brief Method get_IntMin addr 0x201f874 size 0xdc virtual false final false
 int32_t get_IntMin() ;

/// @brief Method get_IntMax addr 0x201f950 size 0xdc virtual false final false
 int32_t get_IntMax() ;

/// @brief Method get_IntUIMin addr 0x201fa2c size 0xdc virtual false final false
 int32_t get_IntUIMin() ;

/// @brief Method get_IntUIMax addr 0x201fb08 size 0xdc virtual false final false
 int32_t get_IntUIMax() ;

/// @brief Method get_FloatMin addr 0x201fbe4 size 0x8 virtual false final false
 float_t get_FloatMin() ;

/// @brief Method get_FloatMax addr 0x201fbec size 0x8 virtual false final false
 float_t get_FloatMax() ;

/// @brief Method get_FloatUIMin addr 0x201fbf4 size 0x8 virtual false final false
 float_t get_FloatUIMin() ;

/// @brief Method get_FloatUIMax addr 0x201fbfc size 0x8 virtual false final false
 float_t get_FloatUIMax() ;

/// @brief Method IsContainer addr 0x201fc04 size 0x54 virtual false final false
 bool IsContainer() ;

/// @brief Method IsMultiParam addr 0x201fc58 size 0x10 virtual false final false
 bool IsMultiParam() ;

/// @brief Method IsRamp addr 0x201fc68 size 0x10 virtual false final false
 bool IsRamp() ;

/// @brief Method IsToggle addr 0x201fc78 size 0x10 virtual false final false
 bool IsToggle() ;

/// @brief Method IsColor addr 0x201fc88 size 0x10 virtual false final false
 bool IsColor() ;

/// @brief Method ToVector3 addr 0x201fc98 size 0x84 virtual false final false
 UnityEngine::Vector3 ToVector3() ;

/// @brief Method IsAssetPath addr 0x201fd1c size 0x8 virtual false final false
 bool IsAssetPath() ;

/// @brief Method IsEquivalentTo addr 0x201fd24 size 0x71c virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_ParameterData other) ;

// Ctor Parameters []
explicit HEU_ParameterData() ;

/// @brief Method .ctor addr 0x2020440 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_ParameterData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_ParameterData, "HoudiniEngineUnity", "HEU_ParameterData");
