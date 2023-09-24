#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HAPI_PartType;
}
namespace UnityEngine {
class TerrainData;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Material;
}
namespace System::Text {
class StringBuilder;
}
namespace HoudiniEngineUnity {
class HEU_ObjectInstanceInfo;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_PartData____c;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Mesh;
}
namespace HoudiniEngineUnity {
class HEU_ObjectNode;
}
namespace HoudiniEngineUnity {
class HEU_Curve;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
class HEU_GeoNode;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_PartData__PartOutputType;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0;
}
namespace HoudiniEngineUnity {
class HEU_AttributesStore;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
namespace HoudiniEngineUnity {
struct TransformData;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
namespace UnityEngine {
struct LOD;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_PartData__PartOutputType;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_PartData____c;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1;
}
// Type: ::PartOutputType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9596))
// CS Name: HoudiniEngineUnity.HEU_PartData::PartOutputType
struct CORDL_TYPE HoudiniEngineUnity__HEU_PartData__PartOutputType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_PartData__PartOutputType(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_PartData__PartOutputType(HoudiniEngineUnity__HEU_PartData__PartOutputType const&) = default;
                    constexpr HoudiniEngineUnity__HEU_PartData__PartOutputType(HoudiniEngineUnity__HEU_PartData__PartOutputType&&) = default;
                    constexpr HoudiniEngineUnity__HEU_PartData__PartOutputType& operator=(HoudiniEngineUnity__HEU_PartData__PartOutputType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_PartData__PartOutputType& operator=(HoudiniEngineUnity__HEU_PartData__PartOutputType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_PartData__PartOutputType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_PartData__PartOutputType_Unwrapped : int32_t {
__NONE = 0,
__MESH = 1,
__VOLUME = 2,
__CURVE = 3,
__INSTANCER = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_PartData__PartOutputType_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_PartData__PartOutputType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NONE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData__PartOutputType const NONE;

/// @brief Field MESH offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData__PartOutputType const MESH;

/// @brief Field VOLUME offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData__PartOutputType const VOLUME;

/// @brief Field CURVE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData__PartOutputType const CURVE;

/// @brief Field INSTANCER offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData__PartOutputType const INSTANCER;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::<>c
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9597))
// CS Name: HoudiniEngineUnity.HEU_PartData::<>c
class CORDL_TYPE HoudiniEngineUnity__HEU_PartData____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__HEU_PartData____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_PartData____c", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_PartData____c(HoudiniEngineUnity__HEU_PartData____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_PartData____c", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_PartData____c(HoudiniEngineUnity__HEU_PartData____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_PartData____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_PartData____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_PartData____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_PartData____c& operator=(HoudiniEngineUnity__HEU_PartData____c&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_PartData____c& operator=(HoudiniEngineUnity__HEU_PartData____c const& o) noexcept = default;
                


// Fields

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c value) ;

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c __get___9() ;

static System::Comparison_1<UnityEngine::LOD> __declspec(property(get=__get___9__85_0, put=__set___9__85_0))  __9__85_0;

static void __set___9__85_0(System::Comparison_1<UnityEngine::LOD> value) ;

static System::Comparison_1<UnityEngine::LOD> __get___9__85_0() ;


// Methods

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c New_ctor() ;

/// @brief Method .ctor addr 0x200bbfc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CopyGameObjectComponents>b__85_0 addr 0x200bc04 size 0x18 virtual false final false
 int32_t _CopyGameObjectComponents_b__85_0(UnityEngine::LOD a, UnityEngine::LOD b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::<>c__DisplayClass86_0
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9598))
// CS Name: HoudiniEngineUnity.HEU_PartData::<>c__DisplayClass86_0
class CORDL_TYPE HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0(HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0(HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0& operator=(HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0& operator=(HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData> __declspec(property(get=__get_previousTransformValues, put=__set_previousTransformValues))  previousTransformValues;

constexpr void __set_previousTransformValues(System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData> __get_previousTransformValues() const;


// Methods

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0 New_ctor() ;

/// @brief Method .ctor addr 0x20099c4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CopyChildGameObjects>b__0 addr 0x200bc1c size 0x10c virtual false final false
 void _CopyChildGameObjects_b__0(UnityEngine::Transform trans) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::<>c__DisplayClass88_0
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9599))
// CS Name: HoudiniEngineUnity.HEU_PartData::<>c__DisplayClass88_0
class CORDL_TYPE HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0(HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0(HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0& operator=(HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0& operator=(HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData> __declspec(property(get=__get_previousTransformValues, put=__set_previousTransformValues))  previousTransformValues;

constexpr void __set_previousTransformValues(System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData> __get_previousTransformValues() const;


// Methods

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0 New_ctor() ;

/// @brief Method .ctor addr 0x200a434 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <BakePartToGameObject>b__0 addr 0x200bd28 size 0x10c virtual false final false
 void _BakePartToGameObject_b__0(UnityEngine::Transform trans) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::<>c__DisplayClass88_1
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9600))
// CS Name: HoudiniEngineUnity.HEU_PartData::<>c__DisplayClass88_1
class CORDL_TYPE HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1(HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1(HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1& operator=(HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1& operator=(HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData> __declspec(property(get=__get_previousTransformValues, put=__set_previousTransformValues))  previousTransformValues;

constexpr void __set_previousTransformValues(System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData> __get_previousTransformValues() const;


// Methods

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1 New_ctor() ;

/// @brief Method .ctor addr 0x200a43c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <BakePartToGameObject>b__1 addr 0x200be34 size 0x10c virtual false final false
 void _BakePartToGameObject_b__1(UnityEngine::Transform trans) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_PartData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9601))
// CS Name: HoudiniEngineUnity.HEU_PartData
class CORDL_TYPE HEU_PartData : public UnityEngine::ScriptableObject {
public:
// Declarations
using __c__DisplayClass88_1 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1;

using __c__DisplayClass88_0 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0;

using __c__DisplayClass86_0 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0;

using __c = HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c;

using PartOutputType = HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData__PartOutputType;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_PartData>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_PartData>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~HEU_PartData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PartData", modifiers: " const&", def_value: None }]
constexpr HEU_PartData(HEU_PartData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PartData", modifiers: "&&", def_value: None }]
constexpr HEU_PartData(HEU_PartData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_PartData(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr HEU_PartData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_PartData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_PartData& operator=(HEU_PartData&& o) noexcept = default;
  constexpr HEU_PartData& operator=(HEU_PartData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__partID, put=__set__partID))  _partID;

constexpr void __set__partID(int32_t value) ;

constexpr int32_t __get__partID() const;

 ::StringW __declspec(property(get=__get__partName, put=__set__partName))  _partName;

constexpr void __set__partName(::StringW value) ;

constexpr ::StringW __get__partName() const;

 int32_t __declspec(property(get=__get__objectNodeID, put=__set__objectNodeID))  _objectNodeID;

constexpr void __set__objectNodeID(int32_t value) ;

constexpr int32_t __get__objectNodeID() const;

 int32_t __declspec(property(get=__get__geoID, put=__set__geoID))  _geoID;

constexpr void __set__geoID(int32_t value) ;

constexpr int32_t __get__geoID() const;

 HoudiniEngineUnity::HAPI_PartType __declspec(property(get=__get__partType, put=__set__partType))  _partType;

constexpr void __set__partType(HoudiniEngineUnity::HAPI_PartType value) ;

constexpr HoudiniEngineUnity::HAPI_PartType __get__partType() const;

 HoudiniEngineUnity::HEU_GeoNode __declspec(property(get=__get__geoNode, put=__set__geoNode))  _geoNode;

constexpr void __set__geoNode(HoudiniEngineUnity::HEU_GeoNode value) ;

constexpr HoudiniEngineUnity::HEU_GeoNode __get__geoNode() const;

 bool __declspec(property(get=__get__isAttribInstancer, put=__set__isAttribInstancer))  _isAttribInstancer;

constexpr void __set__isAttribInstancer(bool value) ;

constexpr bool __get__isAttribInstancer() const;

 bool __declspec(property(get=__get__isPartInstanced, put=__set__isPartInstanced))  _isPartInstanced;

constexpr void __set__isPartInstanced(bool value) ;

constexpr bool __get__isPartInstanced() const;

 int32_t __declspec(property(get=__get__partPointCount, put=__set__partPointCount))  _partPointCount;

constexpr void __set__partPointCount(int32_t value) ;

constexpr int32_t __get__partPointCount() const;

 bool __declspec(property(get=__get__isObjectInstancer, put=__set__isObjectInstancer))  _isObjectInstancer;

constexpr void __set__isObjectInstancer(bool value) ;

constexpr bool __get__isObjectInstancer() const;

 bool __declspec(property(get=__get__objectInstancesGenerated, put=__set__objectInstancesGenerated))  _objectInstancesGenerated;

constexpr void __set__objectInstancesGenerated(bool value) ;

constexpr bool __get__objectInstancesGenerated() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ObjectInstanceInfo> __declspec(property(get=__get__objectInstanceInfos, put=__set__objectInstanceInfos))  _objectInstanceInfos;

constexpr void __set__objectInstanceInfos(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ObjectInstanceInfo> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ObjectInstanceInfo> __get__objectInstanceInfos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__terrainOffsetPosition, put=__set__terrainOffsetPosition))  _terrainOffsetPosition;

constexpr void __set__terrainOffsetPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__terrainOffsetPosition() const;

 UnityEngine::Object __declspec(property(get=__get__assetDBTerrainData, put=__set__assetDBTerrainData))  _assetDBTerrainData;

constexpr void __set__assetDBTerrainData(UnityEngine::Object value) ;

constexpr UnityEngine::Object __get__assetDBTerrainData() const;

 bool __declspec(property(get=__get__isPartEditable, put=__set__isPartEditable))  _isPartEditable;

constexpr void __set__isPartEditable(bool value) ;

constexpr bool __get__isPartEditable() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData__PartOutputType __declspec(property(get=__get__partOutputType, put=__set__partOutputType))  _partOutputType;

constexpr void __set__partOutputType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData__PartOutputType value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData__PartOutputType __get__partOutputType() const;

 HoudiniEngineUnity::HEU_Curve __declspec(property(get=__get__curve, put=__set__curve))  _curve;

constexpr void __set__curve(HoudiniEngineUnity::HEU_Curve value) ;

constexpr HoudiniEngineUnity::HEU_Curve __get__curve() const;

 HoudiniEngineUnity::HEU_AttributesStore __declspec(property(get=__get__attributesStore, put=__set__attributesStore))  _attributesStore;

constexpr void __set__attributesStore(HoudiniEngineUnity::HEU_AttributesStore value) ;

constexpr HoudiniEngineUnity::HEU_AttributesStore __get__attributesStore() const;

 bool __declspec(property(get=__get__haveInstancesBeenGenerated, put=__set__haveInstancesBeenGenerated))  _haveInstancesBeenGenerated;

constexpr void __set__haveInstancesBeenGenerated(bool value) ;

constexpr bool __get__haveInstancesBeenGenerated() const;

 int32_t __declspec(property(get=__get__meshVertexCount, put=__set__meshVertexCount))  _meshVertexCount;

constexpr void __set__meshVertexCount(int32_t value) ;

constexpr int32_t __get__meshVertexCount() const;

 HoudiniEngineUnity::HEU_GeneratedOutput __declspec(property(get=__get__generatedOutput, put=__set__generatedOutput))  _generatedOutput;

constexpr void __set__generatedOutput(HoudiniEngineUnity::HEU_GeneratedOutput value) ;

constexpr HoudiniEngineUnity::HEU_GeneratedOutput __get__generatedOutput() const;

 ::StringW __declspec(property(get=__get__volumeLayerName, put=__set__volumeLayerName))  _volumeLayerName;

constexpr void __set__volumeLayerName(::StringW value) ;

constexpr ::StringW __get__volumeLayerName() const;


// Properties

 int32_t __declspec(property(get=get_PartID))  PartID;

 ::StringW __declspec(property(get=get_PartName))  PartName;

 HoudiniEngineUnity::HEU_GeoNode __declspec(property(get=get_ParentGeoNode))  ParentGeoNode;

 HoudiniEngineUnity::HEU_HoudiniAsset __declspec(property(get=get_ParentAsset))  ParentAsset;

 bool __declspec(property(get=get_ObjectInstancesBeenGenerated, put=set_ObjectInstancesBeenGenerated))  ObjectInstancesBeenGenerated;

 int32_t __declspec(property(get=get_MeshVertexCount))  MeshVertexCount;

 HoudiniEngineUnity::HEU_GeneratedOutput __declspec(property(get=get_GeneratedOutput))  GeneratedOutput;

 UnityEngine::GameObject __declspec(property(get=get_OutputGameObject))  OutputGameObject;


// Methods

/// @brief Method get_PartID addr 0x2004f18 size 0x8 virtual false final false
 int32_t get_PartID() ;

/// @brief Method get_PartName addr 0x2004f20 size 0x8 virtual false final false
 ::StringW get_PartName() ;

/// @brief Method get_ParentGeoNode addr 0x2004f28 size 0x8 virtual false final false
 HoudiniEngineUnity::HEU_GeoNode get_ParentGeoNode() ;

/// @brief Method get_ParentAsset addr 0x2004f30 size 0x88 virtual false final false
 HoudiniEngineUnity::HEU_HoudiniAsset get_ParentAsset() ;

/// @brief Method IsPartInstancer addr 0x2004fb8 size 0x10 virtual false final false
 bool IsPartInstancer() ;

/// @brief Method IsAttribInstancer addr 0x2004fc8 size 0x8 virtual false final false
 bool IsAttribInstancer() ;

/// @brief Method IsInstancerAnyType addr 0x2004fd0 size 0x2c virtual false final false
 bool IsInstancerAnyType() ;

/// @brief Method IsPartInstanced addr 0x2004ffc size 0x8 virtual false final false
 bool IsPartInstanced() ;

/// @brief Method GetPartPointCount addr 0x2005004 size 0x8 virtual false final false
 int32_t GetPartPointCount() ;

/// @brief Method IsObjectInstancer addr 0x200500c size 0x8 virtual false final false
 bool IsObjectInstancer() ;

/// @brief Method get_ObjectInstancesBeenGenerated addr 0x2005014 size 0x8 virtual false final false
 bool get_ObjectInstancesBeenGenerated() ;

/// @brief Method set_ObjectInstancesBeenGenerated addr 0x200501c size 0xc virtual false final false
 void set_ObjectInstancesBeenGenerated(bool value) ;

/// @brief Method IsPartVolume addr 0x2002908 size 0x10 virtual false final false
 bool IsPartVolume() ;

/// @brief Method IsPartCurve addr 0x2005028 size 0x10 virtual false final false
 bool IsPartCurve() ;

/// @brief Method IsPartMesh addr 0x2005038 size 0x10 virtual false final false
 bool IsPartMesh() ;

/// @brief Method IsPartEditable addr 0x2005048 size 0x8 virtual false final false
 bool IsPartEditable() ;

/// @brief Method HaveInstancesBeenGenerated addr 0x2005050 size 0x8 virtual false final false
 bool HaveInstancesBeenGenerated() ;

/// @brief Method get_MeshVertexCount addr 0x2005058 size 0x8 virtual false final false
 int32_t get_MeshVertexCount() ;

/// @brief Method get_GeneratedOutput addr 0x2005060 size 0x8 virtual false final false
 HoudiniEngineUnity::HEU_GeneratedOutput get_GeneratedOutput() ;

/// @brief Method get_OutputGameObject addr 0x2005068 size 0x24 virtual false final false
 UnityEngine::GameObject get_OutputGameObject() ;

static HoudiniEngineUnity::HEU_PartData New_ctor() ;

/// @brief Method .ctor addr 0x200508c size 0x80 virtual false final false
 void _ctor() ;

/// @brief Method Initialize addr 0x200510c size 0x1e4 virtual false final false
 void Initialize(HoudiniEngineUnity::HEU_SessionBase session, int32_t partID, int32_t geoID, int32_t objectNodeID, HoudiniEngineUnity::HEU_GeoNode geoNode, ByRef<HoudiniEngineUnity::HAPI_PartInfo> partInfo, HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData__PartOutputType partOutputType, bool isEditable, bool isObjectInstancer, bool isAttribInstancer) ;

/// @brief Method SetGameObjectName addr 0x20052f0 size 0x148 virtual false final false
 void SetGameObjectName(::StringW partName) ;

/// @brief Method SetGameObject addr 0x2005438 size 0x24 virtual false final false
 void SetGameObject(UnityEngine::GameObject gameObject) ;

/// @brief Method SetVolumeLayerName addr 0x200545c size 0x8 virtual false final false
 void SetVolumeLayerName(::StringW name) ;

/// @brief Method GetVolumeLayerName addr 0x2005464 size 0x8 virtual false final false
 ::StringW GetVolumeLayerName() ;

/// @brief Method DestroyAllData addr 0x200546c size 0x134 virtual false final false
 void DestroyAllData() ;

/// @brief Method ApplyHAPITransform addr 0x2005744 size 0x168 virtual false final false
 void ApplyHAPITransform(ByRef<HoudiniEngineUnity::HAPI_Transform> hapiTransform) ;

/// @brief Method GetDebugInfo addr 0x20058ac size 0x22c virtual false final false
 void GetDebugInfo(System::Text::StringBuilder sb) ;

/// @brief Method IsUsingMaterial addr 0x2005ad8 size 0x24 virtual false final false
 bool IsUsingMaterial(HoudiniEngineUnity::HEU_MaterialData materialData) ;

/// @brief Method GetClonableObjects addr 0x2005afc size 0x100 virtual false final false
 void GetClonableObjects(System::Collections::Generic::List_1<UnityEngine::GameObject> clonableObjects) ;

/// @brief Method GetClonableParts addr 0x2005bfc size 0xf8 virtual false final false
 void GetClonableParts(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PartData> clonableParts) ;

/// @brief Method GetOutputGameObjects addr 0x2005cf4 size 0x100 virtual false final false
 void GetOutputGameObjects(System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects) ;

/// @brief Method GetOutput addr 0x2005df4 size 0xb8 virtual false final false
 void GetOutput(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeneratedOutput> outputs) ;

/// @brief Method GetHDAPartWithGameObject addr 0x2005eac size 0x84 virtual false final false
 HoudiniEngineUnity::HEU_PartData GetHDAPartWithGameObject(UnityEngine::GameObject inGameObject) ;

/// @brief Method SetObjectInstancer addr 0x2005f30 size 0xc virtual false final false
 void SetObjectInstancer(bool bObjectInstancer) ;

/// @brief Method ClearInstances addr 0x2004100 size 0x110 virtual false final false
 void ClearInstances() ;

/// @brief Method ClearObjectInstanceInfos addr 0x20055a0 size 0xcc virtual false final false
 void ClearObjectInstanceInfos() ;

/// @brief Method ClearInvalidObjectInstanceInfos addr 0x2004210 size 0x200 virtual false final false
 void ClearInvalidObjectInstanceInfos() ;

/// @brief Method ClearGeneratedData addr 0x2005f3c size 0x18 virtual false final false
 void ClearGeneratedData() ;

/// @brief Method ClearGeneratedMeshOutput addr 0x2005f54 size 0x88 virtual false final false
 void ClearGeneratedMeshOutput() ;

/// @brief Method ClearGeneratedVolumeOutput addr 0x2005fdc size 0x34 virtual false final false
 void ClearGeneratedVolumeOutput() ;

/// @brief Method GeneratePartInstances addr 0x2006010 size 0x738 virtual false final false
 void GeneratePartInstances(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method GenerateInstancesFromObjectID addr 0x2003ba8 size 0x3d4 virtual false final false
 void GenerateInstancesFromObjectID(HoudiniEngineUnity::HEU_SessionBase session, int32_t objectNodeID, ::ArrayW<::StringW> instancePrefixes) ;

/// @brief Method GenerateInstancesFromObject addr 0x2006c1c size 0x300 virtual false final false
 void GenerateInstancesFromObject(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_ObjectNode sourceObject, ::ArrayW<::StringW> instancePrefixes) ;

/// @brief Method GenerateInstancesFromObjectIds addr 0x2002918 size 0x600 virtual false final false
 void GenerateInstancesFromObjectIds(HoudiniEngineUnity::HEU_SessionBase session, ::ArrayW<::StringW> instancePrefixes) ;

/// @brief Method GenerateInstancesFromUnityAssetPathAttribute addr 0x2002f18 size 0xc90 virtual false final false
 void GenerateInstancesFromUnityAssetPathAttribute(HoudiniEngineUnity::HEU_SessionBase session, ::StringW unityInstanceAttr) ;

/// @brief Method CreateNewInstanceFromObject addr 0x2006814 size 0x408 virtual false final false
 void CreateNewInstanceFromObject(UnityEngine::GameObject sourceObject, int32_t instanceIndex, UnityEngine::Transform parentTransform, ByRef<HoudiniEngineUnity::HAPI_Transform> hapiTransform, int32_t instancedObjectNodeID, ::StringW instancedObjectPath, UnityEngine::Vector3 rotationOffset, UnityEngine::Vector3 scaleOffset, ::ArrayW<::StringW> instancePrefixes, UnityEngine::GameObject collisionSrcGO, bool copyParentFlags) ;

/// @brief Method GenerateAttributesStore addr 0x2007180 size 0xb4 virtual false final false
 void GenerateAttributesStore(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method GetCurve addr 0x2007234 size 0x98 virtual false final false
 HoudiniEngineUnity::HEU_Curve GetCurve(bool bEditableOnly) ;

/// @brief Method SetVisiblity addr 0x20072cc size 0x1d8 virtual false final false
 void SetVisiblity(bool bVisibility) ;

/// @brief Method CalculateVisibility addr 0x20074a4 size 0x30 virtual false final false
 void CalculateVisibility(bool bParentVisibility, bool bParentDisplayGeo) ;

/// @brief Method SetColliderState addr 0x20074d4 size 0x1c virtual false final false
 void SetColliderState(bool bEnabled) ;

/// @brief Method CalculateColliderState addr 0x20074f0 size 0x2d8 virtual false final false
 void CalculateColliderState() ;

/// @brief Method CopyGameObjectComponents addr 0x20077c8 size 0x1de0 virtual false final false
static void CopyGameObjectComponents(HoudiniEngineUnity::HEU_PartData partData, UnityEngine::GameObject sourceGO, UnityEngine::GameObject targetGO, ::StringW assetName, System::Collections::Generic::Dictionary_2<UnityEngine::Mesh,UnityEngine::Mesh> sourceToTargetMeshMap, System::Collections::Generic::Dictionary_2<UnityEngine::Material,UnityEngine::Material> sourceToCopiedMaterials, bool bWriteMeshesToAssetDatabase, ByRef<::StringW> bakedAssetPath, ByRef<UnityEngine::Object> assetDBObject, ::StringW assetObjectFileName, bool bDeleteExistingComponents, bool bDontDeletePersistantResources, System::Collections::Generic::List_1<HoudiniEngineUnity::TransformData> lodTransformValues) ;

/// @brief Method CopyChildGameObjects addr 0x20095a8 size 0x41c virtual false final false
static void CopyChildGameObjects(HoudiniEngineUnity::HEU_PartData partData, UnityEngine::GameObject sourceGO, UnityEngine::GameObject targetGO, ::StringW assetName, System::Collections::Generic::Dictionary_2<UnityEngine::Mesh,UnityEngine::Mesh> sourceToTargetMeshMap, System::Collections::Generic::Dictionary_2<UnityEngine::Material,UnityEngine::Material> sourceToCopiedMaterials, bool bWriteMeshesToAssetDatabase, ByRef<::StringW> bakedAssetPath, ByRef<UnityEngine::Object> assetDBObject, ::StringW assetObjectFileName, bool bDeleteExistingComponents, bool bDontDeletePersistantResources, bool bKeepPreviousTransformValues) ;

/// @brief Method BakePartToNewGameObject addr 0x20099cc size 0x140 virtual false final false
 UnityEngine::GameObject BakePartToNewGameObject(UnityEngine::Transform parentTransform, bool bWriteMeshesToAssetDatabase, ByRef<::StringW> bakedAssetPath, System::Collections::Generic::Dictionary_2<UnityEngine::Mesh,UnityEngine::Mesh> sourceToTargetMeshMap, System::Collections::Generic::Dictionary_2<UnityEngine::Material,UnityEngine::Material> sourceToCopiedMaterials, ByRef<UnityEngine::Object> assetDBObject, ::StringW assetObjectFileName, bool bReconnectPrefabInstances) ;

/// @brief Method BakePartToGameObject addr 0x2009c3c size 0x7f8 virtual false final false
static void BakePartToGameObject(HoudiniEngineUnity::HEU_PartData partData, UnityEngine::GameObject srcGO, UnityEngine::GameObject targetGO, ::StringW assetName, bool bIsInstancer, bool bDeleteExistingComponents, bool bDontDeletePersistantResources, bool bWriteMeshesToAssetDatabase, ByRef<::StringW> bakedAssetPath, System::Collections::Generic::Dictionary_2<UnityEngine::Mesh,UnityEngine::Mesh> sourceToTargetMeshMap, System::Collections::Generic::Dictionary_2<UnityEngine::Material,UnityEngine::Material> sourceToCopiedMaterials, ByRef<UnityEngine::Object> assetDBObject, ::StringW assetObjectFileName, bool bReconnectPrefabInstances, bool bKeepPreviousTransformValues) ;

/// @brief Method BakePartToGameObject addr 0x2009b58 size 0xe4 virtual false final false
 void BakePartToGameObject(UnityEngine::GameObject targetGO, bool bDeleteExistingComponents, bool bDontDeletePersistantResources, bool bWriteMeshesToAssetDatabase, ByRef<::StringW> bakedAssetPath, System::Collections::Generic::Dictionary_2<UnityEngine::Mesh,UnityEngine::Mesh> sourceToTargetMeshMap, System::Collections::Generic::Dictionary_2<UnityEngine::Material,UnityEngine::Material> sourceToCopiedMaterials, ByRef<UnityEngine::Object> assetDBObject, ::StringW assetObjectFileName, bool bReconnectPrefabInstances, bool bKeepPreviousTransformValues) ;

/// @brief Method GenerateMesh addr 0x2000e18 size 0x3ec virtual false final false
 bool GenerateMesh(HoudiniEngineUnity::HEU_SessionBase session, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bUseLODGroups) ;

/// @brief Method ProcessCurvePart addr 0x200a444 size 0x138 virtual false final false
 void ProcessCurvePart(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method SyncAttributesStore addr 0x200a57c size 0x128 virtual false final false
 void SyncAttributesStore(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, ByRef<HoudiniEngineUnity::HAPI_PartInfo> partInfo) ;

/// @brief Method SetupAttributeGeometry addr 0x2001384 size 0xcc virtual false final false
 void SetupAttributeGeometry(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method DestroyAttributesStore addr 0x200566c size 0xd8 virtual false final false
 void DestroyAttributesStore() ;

/// @brief Method PopulateObjectInstanceInfos addr 0x2004548 size 0x58 virtual false final false
 void PopulateObjectInstanceInfos(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ObjectInstanceInfo> objInstanceInfos) ;

/// @brief Method SetObjectInstanceInfos addr 0x200b1ac size 0x16c virtual false final false
 void SetObjectInstanceInfos(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ObjectInstanceInfo> sourceObjectInstanceInfos) ;

/// @brief Method GetObjectInstanceInfos addr 0x200b318 size 0x8 virtual false final false
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ObjectInstanceInfo> GetObjectInstanceInfos() ;

/// @brief Method CreateObjectInstanceInfo addr 0x2006ff4 size 0x18c virtual false final false
 HoudiniEngineUnity::HEU_ObjectInstanceInfo CreateObjectInstanceInfo(UnityEngine::GameObject instancedObject, int32_t instancedObjectNodeID, ::StringW instancedObjectPath) ;

/// @brief Method GetObjectInstanceInfoWithObjectPath addr 0x2006f1c size 0xd8 virtual false final false
 HoudiniEngineUnity::HEU_ObjectInstanceInfo GetObjectInstanceInfoWithObjectPath(::StringW path) ;

/// @brief Method GetObjectInstanceInfoWithObjectID addr 0x2006748 size 0xcc virtual false final false
 HoudiniEngineUnity::HEU_ObjectInstanceInfo GetObjectInstanceInfoWithObjectID(int32_t objNodeID) ;

/// @brief Method SetTerrainOffsetPosition addr 0x200b320 size 0xc virtual false final false
 void SetTerrainOffsetPosition(UnityEngine::Vector3 offsetPosition) ;

/// @brief Method SetTerrainData addr 0x200b32c size 0x1a0 virtual false final false
 void SetTerrainData(UnityEngine::TerrainData terrainData, ::StringW exportPathRelative, ::StringW exportPathUser) ;

/// @brief Method AppendBakedCloneName addr 0x2009b0c size 0x4c virtual false final false
static ::StringW AppendBakedCloneName(::StringW name) ;

/// @brief Method ToString addr 0x200b4cc size 0x70 virtual true final false
 ::StringW ToString() ;

/// @brief Method DestroyParts addr 0x200b53c size 0xd4 virtual false final false
static void DestroyParts(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PartData> parts) ;

/// @brief Method DestroyPart addr 0x2001204 size 0x2c virtual false final false
static void DestroyPart(HoudiniEngineUnity::HEU_PartData part) ;

/// @brief Method IsEquivalentTo addr 0x200b610 size 0x588 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_PartData other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData__PartOutputType, "HoudiniEngineUnity", "HEU_PartData/PartOutputType");
NEED_NO_BOX(HoudiniEngineUnity::HEU_PartData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_PartData, "HoudiniEngineUnity", "HEU_PartData");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c, "HoudiniEngineUnity", "HEU_PartData/<>c");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c__DisplayClass86_0, "HoudiniEngineUnity", "HEU_PartData/<>c__DisplayClass86_0");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_0, "HoudiniEngineUnity", "HEU_PartData/<>c__DisplayClass88_0");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_PartData____c__DisplayClass88_1, "HoudiniEngineUnity", "HEU_PartData/<>c__DisplayClass88_1");
