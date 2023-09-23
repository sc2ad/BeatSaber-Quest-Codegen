#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class MeshCollider;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace UnityEngine {
class Transform;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace HoudiniEngineUnity {
class HEU_Handle;
}
namespace HoudiniEngineUnity {
struct TransformData;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Color;
}
namespace HoudiniEngineUnity {
class HEU_Parameters;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Object;
}
namespace HoudiniEngineUnity {
class HEU_OutputAttribute;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAssetRoot;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct Vector3;
}
namespace HoudiniEngineUnity {
struct HAPI_AssetInfo;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace HoudiniEngineUnity {
struct HAPI_HandleInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmChoiceInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmInfo;
}
namespace System {
struct Int32Enum;
}
// Forward declare root types
namespace HoudiniEngineUnity {
template<typename T>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1;
}
namespace HoudiniEngineUnity {
template<typename ARG2,typename T>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2;
}
namespace HoudiniEngineUnity {
template<typename ARG3,typename ARG2,typename T>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3;
}
namespace HoudiniEngineUnity {
template<typename T>
class HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1;
}
namespace HoudiniEngineUnity {
class HEU_GeneralUtility;
}
namespace HoudiniEngineUnity {
template<::cordl_internals::il2cpp_reference_type T>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<int32_t>;
}
namespace HoudiniEngineUnity {
template<::cordl_internals::il2cpp_reference_type T>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,T>;
}
namespace HoudiniEngineUnity {
template<::cordl_internals::il2cpp_reference_type ARG2,::cordl_internals::il2cpp_reference_type T>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,HoudiniEngineUnity::HAPI_HandleInfo>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,HoudiniEngineUnity::HAPI_ObjectInfo>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,HoudiniEngineUnity::HAPI_ParmChoiceInfo>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,HoudiniEngineUnity::HAPI_ParmInfo>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,HoudiniEngineUnity::HAPI_Transform>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,float_t>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,int32_t>;
}
namespace HoudiniEngineUnity {
template<::cordl_internals::il2cpp_reference_type T>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,T>;
}
namespace HoudiniEngineUnity {
template<::cordl_internals::il2cpp_reference_type ARG3,::cordl_internals::il2cpp_reference_type ARG2,::cordl_internals::il2cpp_reference_type T>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>;
}
namespace HoudiniEngineUnity {
template<::cordl_internals::il2cpp_reference_type ARG2,::cordl_internals::il2cpp_reference_type T>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,ARG2,T>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<System::Int32Enum,int32_t,HoudiniEngineUnity::HAPI_Transform>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,System::Int32Enum,HoudiniEngineUnity::HAPI_Transform>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,HoudiniEngineUnity::HAPI_HandleInfo>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,HoudiniEngineUnity::HAPI_ObjectInfo>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,HoudiniEngineUnity::HAPI_ParmChoiceInfo>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,HoudiniEngineUnity::HAPI_ParmInfo>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,float_t>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,int32_t>;
}
namespace HoudiniEngineUnity {
template<::cordl_internals::il2cpp_reference_type T>
class HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int16_t>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int32_t>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int64_t>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int8_t>;
}
namespace HoudiniEngineUnity {
template<::cordl_internals::il2cpp_reference_type T>
class HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>;
}
namespace HoudiniEngineUnity {
template<>
class HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<int32_t>;
}
// Type: ::GetArray1ArgDel`1
// Type: ::GetArray2ArgDel`2
// Type: ::GetArray3ArgDel`3
// Type: ::GetAttributeArrayInputFunc`1
// Type: ::SetAttributeArrayFunc`1
// Type: HoudiniEngineUnity::HEU_GeneralUtility
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9770))
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility
class CORDL_TYPE HEU_GeneralUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using SetAttributeArrayFunc_1 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>;

template<typename T>
using GetAttributeArrayInputFunc_1 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>;

template<typename ARG3,typename ARG2,typename T>
using GetArray3ArgDel_3 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3, ARG2, T>;

template<typename ARG2,typename T>
using GetArray2ArgDel_2 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2, T>;

template<typename T>
using GetArray1ArgDel_1 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_GeneralUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeneralUtility", modifiers: " const&", def_value: None }]
constexpr HEU_GeneralUtility(HEU_GeneralUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeneralUtility", modifiers: "&&", def_value: None }]
constexpr HEU_GeneralUtility(HEU_GeneralUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_GeneralUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_GeneralUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_GeneralUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_GeneralUtility& operator=(HEU_GeneralUtility&& o) noexcept = default;
  constexpr HEU_GeneralUtility& operator=(HEU_GeneralUtility const& o) noexcept = default;
                


// Methods

/// @brief Method GetArray1Arg addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool GetArray1Arg(int32_t arg1, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T> func, ByRef<::ArrayW<T>> data, int32_t start, int32_t count) ;

/// @brief Method GetArray2Arg addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ARG2,typename T>
static bool GetArray2Arg(int32_t arg1, ARG2 arg2, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T> func, ByRef<::ArrayW<T>> data, int32_t start, int32_t count) ;

/// @brief Method GetArray3Arg addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ARG3,typename ARG2,typename T>
static bool GetArray3Arg(int32_t arg1, ARG2 arg2, ARG3 arg3, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T> func, ByRef<::ArrayW<T>> data, int32_t start, int32_t count) ;

/// @brief Method GetArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ARG3,typename ARG2,typename T>
static bool GetArray(int32_t arg1, ARG2 arg2, ARG3 arg3, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T> func1, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T> func2, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T> func3, ByRef<::ArrayW<T>> data, int32_t start, int32_t count, int32_t tupleSize) ;

/// @brief Method SetArray1Arg addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool SetArray1Arg(int32_t arg1, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T> func, ByRef<::ArrayW<T>> data, int32_t start, int32_t count) ;

/// @brief Method SetArray2Arg addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ARG2,typename T>
static bool SetArray2Arg(int32_t arg1, ARG2 arg2, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T> func, ByRef<::ArrayW<T>> data, int32_t start, int32_t count) ;

/// @brief Method SetArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ARG2,typename T>
static bool SetArray(int32_t arg1, ARG2 arg2, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T> func1, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T> func2, ByRef<::ArrayW<T>> data, int32_t start, int32_t count, int32_t tupleSize) ;

/// @brief Method DoArrayElementsMatch addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool DoArrayElementsMatch(::ArrayW<T> array1, ::ArrayW<T> array2) ;

/// @brief Method DoArrayElementsMatch addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool DoArrayElementsMatch(::ArrayW<T> array1, int32_t startOffset1, ::ArrayW<T> array2, int32_t startOffset2, int32_t length) ;

/// @brief Method GetAttributeArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool GetAttributeArray(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ::ArrayW<T> items, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> getFunc, int32_t count) ;

/// @brief Method GetAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool GetAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T>> data, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> getFunc) ;

/// @brief Method GetAttributeStrict addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool GetAttributeStrict(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, HoudiniEngineUnity::HAPI_AttributeOwner attrOwner, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T>> data, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> getFunc) ;

/// @brief Method GetAttributeStringDataHelper addr 0x2042c84 size 0x1d4 virtual false final false
static void GetAttributeStringDataHelper(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<int32_t>> data) ;

/// @brief Method GetAttributeStringData addr 0x2042e58 size 0x134 virtual false final false
static ::ArrayW<::StringW> GetAttributeStringData(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo) ;

/// @brief Method SetAttributeArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool SetAttributeArray(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<T> items, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T> setFunc, int32_t count) ;

/// @brief Method SetAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool SetAttribute(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<T> items, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T> setFunc) ;

/// @brief Method CheckAttributeExists addr 0x2042f8c size 0x50 virtual false final false
static bool CheckAttributeExists(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attribName, HoudiniEngineUnity::HAPI_AttributeOwner attribOwner) ;

/// @brief Method GetAttributeInfo addr 0x2042fdc size 0x94 virtual false final false
static bool GetAttributeInfo(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attribName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attribInfo) ;

/// @brief Method HasValidInstanceAttribute addr 0x2043070 size 0x3c virtual false final false
static bool HasValidInstanceAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attribName) ;

/// @brief Method UpdateGeneratedAttributeStore addr 0x20430ac size 0x1d4 virtual false final false
static void UpdateGeneratedAttributeStore(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, UnityEngine::GameObject go) ;

/// @brief Method CreateOutputAttributeHelper addr 0x2043564 size 0x80 virtual false final false
static HoudiniEngineUnity::HEU_OutputAttribute CreateOutputAttributeHelper(::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo) ;

/// @brief Method CreateOutputAttribute addr 0x2043280 size 0x2e4 virtual false final false
static HoudiniEngineUnity::HEU_OutputAttribute CreateOutputAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo) ;

/// @brief Method CopyWorldTransformValues addr 0x20435e4 size 0x68 virtual false final false
static void CopyWorldTransformValues(UnityEngine::Transform src, UnityEngine::Transform dest) ;

/// @brief Method ApplyTransformTo addr 0x204364c size 0xd4 virtual false final false
static void ApplyTransformTo(UnityEngine::Transform src, UnityEngine::Transform target) ;

/// @brief Method CopyLocalTransformValues addr 0x2043720 size 0x68 virtual false final false
static void CopyLocalTransformValues(UnityEngine::Transform src, UnityEngine::Transform dest) ;

/// @brief Method GetChildGameObjects addr 0x2043788 size 0x3a0 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::GameObject> GetChildGameObjects(UnityEngine::GameObject parentGO) ;

/// @brief Method GetChildGameObjectsWithNamePattern addr 0x2043b28 size 0x420 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::GameObject> GetChildGameObjectsWithNamePattern(UnityEngine::GameObject parentGO, ::StringW pattern, bool bExclude) ;

/// @brief Method GetInstanceChildObjects addr 0x2043f48 size 0x4c virtual false final false
static System::Collections::Generic::List_1<UnityEngine::GameObject> GetInstanceChildObjects(UnityEngine::GameObject parentGO) ;

/// @brief Method GetNonInstanceChildObjects addr 0x2043f94 size 0x4c virtual false final false
static System::Collections::Generic::List_1<UnityEngine::GameObject> GetNonInstanceChildObjects(UnityEngine::GameObject parentGO) ;

/// @brief Method GetGameObjectByName addr 0x2043fe0 size 0x188 virtual false final false
static UnityEngine::GameObject GetGameObjectByName(System::Collections::Generic::List_1<UnityEngine::GameObject> goList, ::StringW name) ;

/// @brief Method GetGameObjectByNameInProjectOnly addr 0x2044168 size 0xd0 virtual false final false
static UnityEngine::GameObject GetGameObjectByNameInProjectOnly(::StringW name) ;

/// @brief Method IsGameObjectInProject addr 0x2044238 size 0x8 virtual false final false
static bool IsGameObjectInProject(UnityEngine::GameObject go) ;

/// @brief Method GetGameObjectByNameInScene addr 0x2044240 size 0x4c virtual false final false
static UnityEngine::GameObject GetGameObjectByNameInScene(::StringW name) ;

/// @brief Method GetHDAByGameObjectNameInScene addr 0x204428c size 0x4c virtual false final false
static HoudiniEngineUnity::HEU_HoudiniAssetRoot GetHDAByGameObjectNameInScene(::StringW name) ;

/// @brief Method GetOrCreateComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetOrCreateComponent(UnityEngine::GameObject gameObject) ;

/// @brief Method DestroyGeneratedComponents addr 0x20442d8 size 0x120 virtual false final false
static void DestroyGeneratedComponents(UnityEngine::GameObject gameObject) ;

/// @brief Method DestroyGeneratedMeshComponents addr 0x20443f8 size 0xb8 virtual false final false
static void DestroyGeneratedMeshComponents(UnityEngine::GameObject gameObject) ;

/// @brief Method DestroyTerrainComponents addr 0x20444b0 size 0x1b4 virtual false final false
static void DestroyTerrainComponents(UnityEngine::GameObject gameObject) ;

/// @brief Method DestroyComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void DestroyComponent(UnityEngine::GameObject gameObject) ;

/// @brief Method DestroyImmediate addr 0x2044664 size 0x44 virtual false final false
static void DestroyImmediate(UnityEngine::Object obj, bool bAllowDestroyingAssets, bool bRegisterUndo) ;

/// @brief Method DestroyBakedGameObjects addr 0x20446a8 size 0x8 virtual false final false
static void DestroyBakedGameObjects(System::Collections::Generic::List_1<UnityEngine::GameObject> gameObjectsToDestroy) ;

/// @brief Method DestroyBakedGameObjectsWithEndName addr 0x20446b0 size 0x140 virtual false final false
static void DestroyBakedGameObjectsWithEndName(System::Collections::Generic::List_1<UnityEngine::GameObject> gameObjectsToDestroy, ::StringW endName) ;

/// @brief Method DestroyLODGroup addr 0x2044a5c size 0x1ec virtual false final false
static void DestroyLODGroup(UnityEngine::GameObject targetGO, bool bDontDeletePersistantResources) ;

/// @brief Method GetLODTransforms addr 0x2044c48 size 0x1b8 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::Transform> GetLODTransforms(UnityEngine::GameObject targetGO) ;

/// @brief Method SetLODTransformValues addr 0x2044e00 size 0x144 virtual false final false
static void SetLODTransformValues(UnityEngine::GameObject targetGO, System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData> transformData) ;

/// @brief Method DestroyGeneratedMeshMaterialsLODGroups addr 0x20447f0 size 0x26c virtual false final false
static void DestroyGeneratedMeshMaterialsLODGroups(UnityEngine::GameObject targetGO, bool bDontDeletePersistantResources) ;

/// @brief Method DestroyGeneratedMaterial addr 0x2044f44 size 0x134 virtual false final false
static void DestroyGeneratedMaterial(UnityEngine::Material material) ;

/// @brief Method DestroyMeshCollider addr 0x2045078 size 0x134 virtual false final false
static void DestroyMeshCollider(UnityEngine::MeshCollider meshCollider, bool bDontDeletePersistantResources) ;

/// @brief Method SetGameObjectRenderVisiblity addr 0x20451ac size 0xe4 virtual false final false
static void SetGameObjectRenderVisiblity(UnityEngine::GameObject gameObject, bool bVisible) ;

/// @brief Method SetGameObjectChildrenRenderVisibility addr 0x2045290 size 0xe8 virtual false final false
static void SetGameObjectChildrenRenderVisibility(UnityEngine::GameObject gameObject, bool bVisible) ;

/// @brief Method SetGameObjectColliderState addr 0x2045378 size 0xe4 virtual false final false
static void SetGameObjectColliderState(UnityEngine::GameObject gameObject, bool bEnabled) ;

/// @brief Method SetGameObjectChildrenColliderState addr 0x204545c size 0xe8 virtual false final false
static void SetGameObjectChildrenColliderState(UnityEngine::GameObject gameObject, bool bVisible) ;

/// @brief Method ColorToString addr 0x2045544 size 0x1f0 virtual false final false
static ::StringW ColorToString(UnityEngine::Color c) ;

/// @brief Method StringToColor addr 0x2045734 size 0x224 virtual false final false
static UnityEngine::Color StringToColor(::StringW colorString) ;

/// @brief Method DoesUnityTagExist addr 0x2045958 size 0x8 virtual false final false
static bool DoesUnityTagExist(::StringW tagName) ;

/// @brief Method SetLayer addr 0x2045960 size 0xe0 virtual false final false
static void SetLayer(UnityEngine::GameObject rootGO, int32_t layer, bool bIncludeChildren) ;

/// @brief Method SetTag addr 0x2045a40 size 0xe0 virtual false final false
static void SetTag(UnityEngine::GameObject rootGO, ::StringW tag, bool bIncludeChildren) ;

/// @brief Method CopyFlags addr 0x2045b20 size 0x68 virtual false final false
static void CopyFlags(UnityEngine::GameObject srcGO, UnityEngine::GameObject dstGO, bool bIncludeChildren) ;

/// @brief Method IsMouseWithinSceneView addr 0x2045b88 size 0x70 virtual false final false
static bool IsMouseWithinSceneView(UnityEngine::Camera camera, UnityEngine::Vector2 mousePosition) ;

/// @brief Method IsMouseOverRect addr 0x2045bf8 size 0x44 virtual false final false
static bool IsMouseOverRect(UnityEngine::Camera camera, UnityEngine::Vector2 mousePosition, ByRef<UnityEngine::Rect> rect) ;

/// @brief Method GetSystemTypeByName addr 0x2045c3c size 0x4c virtual false final false
static System::Type GetSystemTypeByName(::StringW typeName) ;

/// @brief Method AssignUnityTag addr 0x2045c88 size 0x2d8 virtual false final false
static void AssignUnityTag(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, UnityEngine::GameObject gameObject) ;

/// @brief Method AssignUnityLayer addr 0x2045f60 size 0x258 virtual false final false
static void AssignUnityLayer(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, UnityEngine::GameObject gameObject) ;

/// @brief Method MakeStaticIfHasAttribute addr 0x20461b8 size 0x170 virtual false final false
static void MakeStaticIfHasAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, UnityEngine::GameObject gameObject) ;

/// @brief Method GetUnityScriptAttributeValue addr 0x2046328 size 0x168 virtual false final false
static ::StringW GetUnityScriptAttributeValue(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID) ;

/// @brief Method GetAttributeStringValueSingle addr 0x2046490 size 0x2a4 virtual false final false
static ::StringW GetAttributeStringValueSingle(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, HoudiniEngineUnity::HAPI_AttributeOwner attrOwner) ;

/// @brief Method GetAttributeStringValueSingleStrict addr 0x2046734 size 0x380 virtual false final false
static ::StringW GetAttributeStringValueSingleStrict(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, HoudiniEngineUnity::HAPI_AttributeOwner attrOwner) ;

/// @brief Method GetAttributeFloatSingle addr 0x2046ab4 size 0x160 virtual false final false
static bool GetAttributeFloatSingle(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<float_t> value) ;

/// @brief Method GetAttributeIntSingle addr 0x2046c14 size 0x160 virtual false final false
static bool GetAttributeIntSingle(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<int32_t> value) ;

/// @brief Method GetAttributeColorSingle addr 0x2046d74 size 0x1cc virtual false final false
static bool GetAttributeColorSingle(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<UnityEngine::Color> value) ;

/// @brief Method HasAttribute addr 0x2046f40 size 0xa4 virtual false final false
static bool HasAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, HoudiniEngineUnity::HAPI_AttributeOwner attrOwner) ;

/// @brief Method AttachScriptWithInvokeFunction addr 0x2046fe4 size 0x550 virtual false final false
static void AttachScriptWithInvokeFunction(::StringW scriptSet, UnityEngine::GameObject gameObject) ;

/// @brief Method IsInCameraView addr 0x2047534 size 0x98 virtual false final false
static bool IsInCameraView(UnityEngine::Camera camera, UnityEngine::Vector3 point) ;

/// @brief Method FindOrGenerateHandles addr 0x20475cc size 0x464 virtual false final false
static System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Handle> FindOrGenerateHandles(HoudiniEngineUnity::HEU_SessionBase session, ByRef<HoudiniEngineUnity::HAPI_AssetInfo> assetInfo, int32_t assetID, ::StringW assetName, HoudiniEngineUnity::HEU_Parameters parameters, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Handle> currentHandles) ;

/// @brief Method CopyComponents addr 0x2047a30 size 0x4 virtual false final false
static void CopyComponents(UnityEngine::GameObject srcGO, UnityEngine::GameObject destGO) ;

/// @brief Method LoadTextureFromFile addr 0x2047a34 size 0x1f4 virtual false final false
static UnityEngine::Texture LoadTextureFromFile(::StringW filePath) ;

/// @brief Method MakeTexture addr 0x2047c28 size 0x134 virtual false final false
static UnityEngine::Texture2D MakeTexture(int32_t width, int32_t height, UnityEngine::Color color) ;

/// @brief Method ReplaceFirstOccurrence addr 0x2047d5c size 0x94 virtual false final false
static ::StringW ReplaceFirstOccurrence(::StringW srcStr, ::StringW searchStr, ::StringW replaceStr) ;

/// @brief Method SetParentWithCleanTransform addr 0x2047df0 size 0xf0 virtual false final false
static void SetParentWithCleanTransform(UnityEngine::Transform parentTransform, UnityEngine::Transform childTransform) ;

/// @brief Method CopyHAPITransform addr 0x2047ee0 size 0x94 virtual false final false
static void CopyHAPITransform(ByRef<HoudiniEngineUnity::HAPI_Transform> src, ByRef<HoudiniEngineUnity::HAPI_Transform> dest) ;

/// @brief Method GetMaterialAttributeValueFromPart addr 0x2047f74 size 0x178 virtual false final false
static ::StringW GetMaterialAttributeValueFromPart(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID) ;

/// @brief Method ReplaceColliderMeshFromMeshFilter addr 0x20480ec size 0x158 virtual false final false
static void ReplaceColliderMeshFromMeshFilter(UnityEngine::GameObject targetGO, UnityEngine::GameObject sourceColliderGO) ;

/// @brief Method ReplaceColliderMeshFromMeshCollider addr 0x2048244 size 0x150 virtual false final false
static void ReplaceColliderMeshFromMeshCollider(UnityEngine::GameObject targetGO, UnityEngine::GameObject sourceColliderGO) ;

/// @brief Method BiLerpf addr 0x2048394 size 0x48 virtual false final false
static float_t BiLerpf(float_t p00, float_t p10, float_t p01, float_t p11, float_t fracX, float_t fracY) ;

/// @brief Method Fractionalf addr 0x20483dc size 0xc virtual false final false
static float_t Fractionalf(float_t value) ;

/// @brief Method LongestCommonPrefix addr 0x20483e8 size 0x18c virtual false final false
static ::StringW LongestCommonPrefix(System::Collections::Generic::List_1<::StringW> list) ;

/// @brief Method GetRawOperatorName addr 0x2048574 size 0x58 virtual false final false
static ::StringW GetRawOperatorName(::StringW assetOpName) ;

/// @brief Method GetPrefabFromPath addr 0x20485cc size 0x250 virtual false final false
static UnityEngine::GameObject GetPrefabFromPath(::StringW path) ;

// Ctor Parameters []
explicit HEU_GeneralUtility() ;

/// @brief Method .ctor addr 0x204881c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray1ArgDel`1
namespace HoudiniEngineUnity {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9765)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9765), inst: 2 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray1ArgDel`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<T> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, ByRef<::ArrayW<T>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, ByRef<::ArrayW<T>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray1ArgDel`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9765)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9765), inst: 92 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray1ArgDel`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, ByRef<::ArrayW<int32_t>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, ByRef<::ArrayW<int32_t>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray1ArgDel`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9765))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9765), inst: 374 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray1ArgDel`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<float_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, ByRef<::ArrayW<float_t>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, ByRef<::ArrayW<float_t>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray1ArgDel`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9765))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9765), inst: 4714 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray1ArgDel`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmInfo> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray1ArgDel`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9765)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9765), inst: 5714 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray1ArgDel`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_HandleInfo> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray1ArgDel`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9765)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9765), inst: 5715 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray1ArgDel`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ObjectInfo> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray1ArgDel`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9765)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9765), inst: 5716 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray1ArgDel`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_ParmChoiceInfo> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray1ArgDel`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9765)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9765), inst: 6994 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray1ArgDel`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1<HoudiniEngineUnity::HAPI_Transform> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<::cordl_internals::il2cpp_reference_type ARG2,::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9766))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9766), inst: 80 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray2ArgDel`2
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<T>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, ARG2 arg2, ByRef<::ArrayW<T>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9766)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9766), inst: 511 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray2ArgDel`2
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2, ByRef<::ArrayW<int32_t>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, int32_t arg2, ByRef<::ArrayW<int32_t>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9766))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9766), inst: 512 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray2ArgDel`2
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,float_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2, ByRef<::ArrayW<float_t>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, int32_t arg2, ByRef<::ArrayW<float_t>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9766))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9766), inst: 1532 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray2ArgDel`2
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,T> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2, ByRef<::ArrayW<T>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, int32_t arg2, ByRef<::ArrayW<T>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9766)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9766), inst: 7453 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray2ArgDel`2
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,HoudiniEngineUnity::HAPI_HandleInfo> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, int32_t arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9766)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9766), inst: 7454 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray2ArgDel`2
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,HoudiniEngineUnity::HAPI_ObjectInfo> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, int32_t arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9766))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9766), inst: 7455 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray2ArgDel`2
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,HoudiniEngineUnity::HAPI_ParmChoiceInfo> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, int32_t arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9766)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9766), inst: 7456 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray2ArgDel`2
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,HoudiniEngineUnity::HAPI_ParmInfo> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, int32_t arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9766))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9766), inst: 7457 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray2ArgDel`2
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,HoudiniEngineUnity::HAPI_Transform> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, int32_t arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9766))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9766), inst: 7458 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray2ArgDel`2
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2<System::Int32Enum,HoudiniEngineUnity::HAPI_Transform> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, System::Int32Enum arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, System::Int32Enum arg2, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9767)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9767), inst: 5149 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray3ArgDel`3
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2, int32_t arg3, ByRef<::ArrayW<int32_t>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, int32_t arg2, int32_t arg3, ByRef<::ArrayW<int32_t>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<::cordl_internals::il2cpp_reference_type ARG3,::cordl_internals::il2cpp_reference_type ARG2,::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9767)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9767), inst: 5155 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray3ArgDel`3
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<T>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, ARG2 arg2, ARG3 arg3, ByRef<::ArrayW<T>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9767)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9767), inst: 6040 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray3ArgDel`3
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,T> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2, int32_t arg3, ByRef<::ArrayW<T>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, int32_t arg2, int32_t arg3, ByRef<::ArrayW<T>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<::cordl_internals::il2cpp_reference_type ARG2,::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9767))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9767), inst: 6046 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray3ArgDel`3
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,ARG2,T> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, ARG2 arg2, int32_t arg3, ByRef<::ArrayW<T>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, ARG2 arg2, int32_t arg3, ByRef<::ArrayW<T>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9767)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9767), inst: 7459 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray3ArgDel`3
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,HoudiniEngineUnity::HAPI_HandleInfo> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2, int32_t arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, int32_t arg2, int32_t arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9767)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9767), inst: 7460 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray3ArgDel`3
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,HoudiniEngineUnity::HAPI_ObjectInfo> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2, int32_t arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, int32_t arg2, int32_t arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9767))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9767), inst: 7461 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray3ArgDel`3
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,HoudiniEngineUnity::HAPI_ParmChoiceInfo> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2, int32_t arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, int32_t arg2, int32_t arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9767))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9767), inst: 7462 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray3ArgDel`3
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,HoudiniEngineUnity::HAPI_ParmInfo> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2, int32_t arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, int32_t arg2, int32_t arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9767)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9767), inst: 7463 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray3ArgDel`3
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,float_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2, int32_t arg3, ByRef<::ArrayW<float_t>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, int32_t arg2, int32_t arg3, ByRef<::ArrayW<float_t>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9767)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9767), inst: 7464 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray3ArgDel`3
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,System::Int32Enum,HoudiniEngineUnity::HAPI_Transform> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, System::Int32Enum arg2, int32_t arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, System::Int32Enum arg2, int32_t arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9767))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9767), inst: 7465 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetArray3ArgDel`3
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3<System::Int32Enum,int32_t,HoudiniEngineUnity::HAPI_Transform> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2, System::Int32Enum arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t arg1, int32_t arg2, System::Int32Enum arg3, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> data, int32_t start, int32_t length, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetAttributeArrayInputFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9768)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9768), inst: 2 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetAttributeArrayInputFunc`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T>> items, int32_t start, int32_t end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<T>> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetAttributeArrayInputFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9768)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9768), inst: 92 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetAttributeArrayInputFunc`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<int32_t>> items, int32_t start, int32_t end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<int32_t>> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetAttributeArrayInputFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9768)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9768), inst: 374 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetAttributeArrayInputFunc`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<float_t>> items, int32_t start, int32_t end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<float_t>> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetAttributeArrayInputFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9768)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9768), inst: 721 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetAttributeArrayInputFunc`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int16_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<int16_t>> items, int32_t start, int32_t end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<int16_t>> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetAttributeArrayInputFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9768)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9768), inst: 830 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetAttributeArrayInputFunc`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int64_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<int64_t>> items, int32_t start, int32_t end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<int64_t>> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetAttributeArrayInputFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9768))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9768), inst: 2598 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetAttributeArrayInputFunc`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<double_t>> items, int32_t start, int32_t end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<double_t>> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetAttributeArrayInputFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9768))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9768), inst: 2601 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::GetAttributeArrayInputFunc`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int8_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<int8_t>> items, int32_t start, int32_t end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t geoID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, ByRef<::ArrayW<int8_t>> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> info, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::SetAttributeArrayFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9769))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9769), inst: 2 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::SetAttributeArrayFunc`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<T> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<T> items, int32_t start, int32_t end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<T> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::SetAttributeArrayFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(9769))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9769), inst: 92 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::SetAttributeArrayFunc`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<int32_t> items, int32_t start, int32_t end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<int32_t> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::SetAttributeArrayFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9769)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9769), inst: 374 })
// CS Name: HoudiniEngineUnity.HEU_GeneralUtility::SetAttributeArrayFunc`1
class CORDL_TYPE HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1(HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1& operator=(HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<float_t> items, int32_t start, int32_t end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t geoID, int32_t partID, ::StringW attrName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<float_t> items, int32_t start, int32_t end, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool EndInvoke(ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray1ArgDel_1, "HoudiniEngineUnity", "HEU_GeneralUtility/GetArray1ArgDel`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray2ArgDel_2, "HoudiniEngineUnity", "HEU_GeneralUtility/GetArray2ArgDel`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetArray3ArgDel_3, "HoudiniEngineUnity", "HEU_GeneralUtility/GetArray3ArgDel`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__GetAttributeArrayInputFunc_1, "HoudiniEngineUnity", "HEU_GeneralUtility/GetAttributeArrayInputFunc`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GeneralUtility__SetAttributeArrayFunc_1, "HoudiniEngineUnity", "HEU_GeneralUtility/SetAttributeArrayFunc`1");
NEED_NO_BOX(HoudiniEngineUnity::HEU_GeneralUtility);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_GeneralUtility, "HoudiniEngineUnity", "HEU_GeneralUtility");
