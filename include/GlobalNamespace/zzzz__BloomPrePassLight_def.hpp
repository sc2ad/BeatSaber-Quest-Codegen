#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__BloomPrePassLight__VertexData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace GlobalNamespace {
class BloomPrePassLightTypeSO;
}
namespace GlobalNamespace {
struct GlobalNamespace__BloomPrePassLight__QuadData;
}
namespace GlobalNamespace {
class GlobalNamespace__BloomPrePassLight__LightsDataItem;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassLight;
}
namespace GlobalNamespace {
class GlobalNamespace__BloomPrePassLight__LightsDataItem;
}
namespace GlobalNamespace {
struct GlobalNamespace__BloomPrePassLight__QuadData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BloomPrePassLight__VertexData;
}
// Type: ::VertexData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14632))
// CS Name: BloomPrePassLight::VertexData
struct CORDL_TYPE GlobalNamespace__BloomPrePassLight__VertexData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "vertex", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "viewPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "color", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BloomPrePassLight__VertexData(UnityEngine::Vector3 vertex, UnityEngine::Vector3 viewPos, UnityEngine::Color color, UnityEngine::Vector3 uv) noexcept;


                    constexpr GlobalNamespace__BloomPrePassLight__VertexData(GlobalNamespace__BloomPrePassLight__VertexData const&) = default;
                    constexpr GlobalNamespace__BloomPrePassLight__VertexData(GlobalNamespace__BloomPrePassLight__VertexData&&) = default;
                    constexpr GlobalNamespace__BloomPrePassLight__VertexData& operator=(GlobalNamespace__BloomPrePassLight__VertexData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BloomPrePassLight__VertexData& operator=(GlobalNamespace__BloomPrePassLight__VertexData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x34};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BloomPrePassLight__VertexData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_vertex, put=__set_vertex))  vertex;

constexpr void __set_vertex(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_vertex() const;

 UnityEngine::Vector3 __declspec(property(get=__get_viewPos, put=__set_viewPos))  viewPos;

constexpr void __set_viewPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_viewPos() const;

 UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_color() const;

 UnityEngine::Vector3 __declspec(property(get=__get_uv, put=__set_uv))  uv;

constexpr void __set_uv(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_uv() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::QuadData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14633))
// CS Name: BloomPrePassLight::QuadData
struct CORDL_TYPE GlobalNamespace__BloomPrePassLight__QuadData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "vertex0", ty: "GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData", modifiers: "", def_value: None }, CppParam { name: "vertex1", ty: "GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData", modifiers: "", def_value: None }, CppParam { name: "vertex2", ty: "GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData", modifiers: "", def_value: None }, CppParam { name: "vertex3", ty: "GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BloomPrePassLight__QuadData(GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData vertex0, GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData vertex1, GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData vertex2, GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData vertex3) noexcept;


                    constexpr GlobalNamespace__BloomPrePassLight__QuadData(GlobalNamespace__BloomPrePassLight__QuadData const&) = default;
                    constexpr GlobalNamespace__BloomPrePassLight__QuadData(GlobalNamespace__BloomPrePassLight__QuadData&&) = default;
                    constexpr GlobalNamespace__BloomPrePassLight__QuadData& operator=(GlobalNamespace__BloomPrePassLight__QuadData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BloomPrePassLight__QuadData& operator=(GlobalNamespace__BloomPrePassLight__QuadData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xd0};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BloomPrePassLight__QuadData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData __declspec(property(get=__get_vertex0, put=__set_vertex0))  vertex0;

constexpr void __set_vertex0(GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData value) ;

constexpr GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData __get_vertex0() const;

 GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData __declspec(property(get=__get_vertex1, put=__set_vertex1))  vertex1;

constexpr void __set_vertex1(GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData value) ;

constexpr GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData __get_vertex1() const;

 GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData __declspec(property(get=__get_vertex2, put=__set_vertex2))  vertex2;

constexpr void __set_vertex2(GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData value) ;

constexpr GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData __get_vertex2() const;

 GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData __declspec(property(get=__get_vertex3, put=__set_vertex3))  vertex3;

constexpr void __set_vertex3(GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData value) ;

constexpr GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData __get_vertex3() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightsDataItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14634))
// CS Name: BloomPrePassLight::LightsDataItem
class CORDL_TYPE GlobalNamespace__BloomPrePassLight__LightsDataItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__BloomPrePassLight__LightsDataItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BloomPrePassLight__LightsDataItem", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BloomPrePassLight__LightsDataItem(GlobalNamespace__BloomPrePassLight__LightsDataItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BloomPrePassLight__LightsDataItem", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BloomPrePassLight__LightsDataItem(GlobalNamespace__BloomPrePassLight__LightsDataItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BloomPrePassLight__LightsDataItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BloomPrePassLight__LightsDataItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BloomPrePassLight__LightsDataItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BloomPrePassLight__LightsDataItem& operator=(GlobalNamespace__BloomPrePassLight__LightsDataItem&& o) noexcept = default;
  constexpr GlobalNamespace__BloomPrePassLight__LightsDataItem& operator=(GlobalNamespace__BloomPrePassLight__LightsDataItem const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BloomPrePassLightTypeSO __declspec(property(get=__get_lightType, put=__set_lightType))  lightType;

constexpr void __set_lightType(GlobalNamespace::BloomPrePassLightTypeSO value) ;

constexpr GlobalNamespace::BloomPrePassLightTypeSO __get_lightType() const;

 System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight> __declspec(property(get=__get_lights, put=__set_lights))  lights;

constexpr void __set_lights(System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight> value) ;

constexpr System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight> __get_lights() const;


// Methods

static GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem New_ctor(GlobalNamespace::BloomPrePassLightTypeSO lightType, System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight> lights) ;

/// @brief Method .ctor addr 0x1f94aa8 size 0x2c virtual false final false
 void _ctor(GlobalNamespace::BloomPrePassLightTypeSO lightType, System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight> lights) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BloomPrePassLight
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14635))
// CS Name: BloomPrePassLight
class CORDL_TYPE BloomPrePassLight : public UnityEngine::MonoBehaviour {
public:
// Declarations
using LightsDataItem = GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem;

using QuadData = GlobalNamespace::GlobalNamespace__BloomPrePassLight__QuadData;

using VertexData = GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BloomPrePassLight() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLight", modifiers: " const&", def_value: None }]
constexpr BloomPrePassLight(BloomPrePassLight const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLight", modifiers: "&&", def_value: None }]
constexpr BloomPrePassLight(BloomPrePassLight&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassLight(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BloomPrePassLight& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassLight& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassLight& operator=(BloomPrePassLight&& o) noexcept = default;
  constexpr BloomPrePassLight& operator=(BloomPrePassLight const& o) noexcept = default;
                


// Fields

/// @brief Field kFloatSize offset 0
static constexpr int32_t  kFloatSize{4};

/// @brief Field kVertexOffset offset 0
static constexpr int32_t  kVertexOffset{0};

/// @brief Field kVertexSize offset 0
static constexpr int32_t  kVertexSize{12};

/// @brief Field kViewPosOffset offset 0
static constexpr int32_t  kViewPosOffset{12};

/// @brief Field kViewPosSize offset 0
static constexpr int32_t  kViewPosSize{12};

/// @brief Field kColorOffset offset 0
static constexpr int32_t  kColorOffset{24};

/// @brief Field kColorSize offset 0
static constexpr int32_t  kColorSize{16};

/// @brief Field kUvOffset offset 0
static constexpr int32_t  kUvOffset{40};

/// @brief Field kUvSize offset 0
static constexpr int32_t  kUvSize{12};

/// @brief Field kVertexDataSize offset 0
static constexpr int32_t  kVertexDataSize{52};

 GlobalNamespace::BloomPrePassLightTypeSO __declspec(property(get=__get__lightType, put=__set__lightType))  _lightType;

constexpr void __set__lightType(GlobalNamespace::BloomPrePassLightTypeSO value) ;

constexpr GlobalNamespace::BloomPrePassLightTypeSO __get__lightType() const;

static System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO,System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>> __declspec(property(get=__get__bloomLightsDict, put=__set__bloomLightsDict))  _bloomLightsDict;

static void __set__bloomLightsDict(System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO,System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>> value) ;

static System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO,System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>> __get__bloomLightsDict() ;

static System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem> __declspec(property(get=__get__lightsDataItems, put=__set__lightsDataItems))  _lightsDataItems;

static void __set__lightsDataItems(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem> value) ;

static System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem> __get__lightsDataItems() ;

 GlobalNamespace::BloomPrePassLightTypeSO __declspec(property(get=__get__registeredWithLightType, put=__set__registeredWithLightType))  _registeredWithLightType;

constexpr void __set__registeredWithLightType(GlobalNamespace::BloomPrePassLightTypeSO value) ;

constexpr GlobalNamespace::BloomPrePassLightTypeSO __get__registeredWithLightType() const;

 bool __declspec(property(get=__get__isRegistered, put=__set__isRegistered))  _isRegistered;

constexpr void __set__isRegistered(bool value) ;

constexpr bool __get__isRegistered() const;

 bool __declspec(property(get=__get__isBeingDestroyed, put=__set__isBeingDestroyed))  _isBeingDestroyed;

constexpr void __set__isBeingDestroyed(bool value) ;

constexpr bool __get__isBeingDestroyed() const;


// Properties

static System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO,System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>> __declspec(property(get=get_bloomLightsDict))  bloomLightsDict;

static System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem> __declspec(property(get=get_lightsDataItems))  lightsDataItems;

 bool __declspec(property(get=get_isDirty))  isDirty;


// Methods

/// @brief Method get_bloomLightsDict addr 0x1f9466c size 0x58 virtual false final false
static System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO,System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>> get_bloomLightsDict() ;

/// @brief Method get_lightsDataItems addr 0x1f946c4 size 0x58 virtual false final false
static System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem> get_lightsDataItems() ;

/// @brief Method get_isDirty addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isDirty() ;

/// @brief Method OnEnable addr 0x1f9471c size 0x4 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f949d4 size 0x4 virtual true final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x1f94a9c size 0xc virtual false final false
 void OnDestroy() ;

/// @brief Method RegisterLight addr 0x1f94720 size 0x2b4 virtual false final false
 void RegisterLight() ;

/// @brief Method UnregisterLight addr 0x1f949d8 size 0xc4 virtual false final false
 void UnregisterLight() ;

/// @brief Method DidRegisterLight addr 0x0 size 0xffffffffffffffff virtual true final false
 void DidRegisterLight() ;

/// @brief Method FillMeshData addr 0x0 size 0xffffffffffffffff virtual true final false
 void FillMeshData(ByRef<int32_t> lightNum, ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassLight__QuadData> lightQuads, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix, float_t lineWidth) ;

/// @brief Method Refresh addr 0x0 size 0xffffffffffffffff virtual true final false
 void Refresh() ;

static GlobalNamespace::BloomPrePassLight New_ctor() ;

/// @brief Method .ctor addr 0x1f94ad4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomPrePassLight);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassLight, "", "BloomPrePassLight");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem, "", "BloomPrePassLight/LightsDataItem");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BloomPrePassLight__QuadData, "", "BloomPrePassLight/QuadData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData, "", "BloomPrePassLight/VertexData");
