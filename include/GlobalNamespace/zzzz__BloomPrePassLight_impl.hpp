#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLight_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLightTypeSO_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "vertex", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData::GlobalNamespace__BloomPrePassLight__VertexData(UnityEngine::Vector3 vertex, UnityEngine::Vector3 viewPos, UnityEngine::Color color, UnityEngine::Vector3 uv) noexcept : ::bs_hook::ValueTypeWrapper() {this->vertex = vertex;
this->viewPos = viewPos;
this->color = color;
this->uv = uv;
}
constexpr void GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData::__set_vertex(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData::__get_vertex() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData::__set_viewPos(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xc>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData::__get_viewPos() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xc>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData::__set_color(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x18>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData::__get_color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData::__set_uv(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x28>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData::__get_uv() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x28>(this->__instance);
}
// Ctor Parameters [CppParam { name: "vertex0", ty: "GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertex1", ty: "GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertex2", ty: "GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertex3", ty: "GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BloomPrePassLight__QuadData::GlobalNamespace__BloomPrePassLight__QuadData(GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData vertex0, GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData vertex1, GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData vertex2, GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData vertex3) noexcept : ::bs_hook::ValueTypeWrapper() {this->vertex0 = vertex0;
this->vertex1 = vertex1;
this->vertex2 = vertex2;
this->vertex3 = vertex3;
}
constexpr void GlobalNamespace::GlobalNamespace__BloomPrePassLight__QuadData::__set_vertex0(GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData, 0x0>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData GlobalNamespace::GlobalNamespace__BloomPrePassLight__QuadData::__get_vertex0() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BloomPrePassLight__QuadData::__set_vertex1(GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData, 0x34>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData GlobalNamespace::GlobalNamespace__BloomPrePassLight__QuadData::__get_vertex1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData, 0x34>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BloomPrePassLight__QuadData::__set_vertex2(GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData, 0x68>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData GlobalNamespace::GlobalNamespace__BloomPrePassLight__QuadData::__get_vertex2() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData, 0x68>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BloomPrePassLight__QuadData::__set_vertex3(GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData, 0x9c>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData GlobalNamespace::GlobalNamespace__BloomPrePassLight__QuadData::__get_vertex3() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BloomPrePassLight__VertexData, 0x9c>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem::*)(GlobalNamespace::BloomPrePassLightTypeSO, System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>)>(&GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1f94aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BloomPrePassLightTypeSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem::__set_lightType(GlobalNamespace::BloomPrePassLightTypeSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BloomPrePassLightTypeSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BloomPrePassLightTypeSO>(value));
}
constexpr GlobalNamespace::BloomPrePassLightTypeSO GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem::__get_lightType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BloomPrePassLightTypeSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem::__set_lights(System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>>(value));
}
constexpr System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight> GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem::__get_lights() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "lightType", ty: "GlobalNamespace::BloomPrePassLightTypeSO", modifiers: "", def_value: None }, CppParam { name: "lights", ty: "System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem::GlobalNamespace__BloomPrePassLight__LightsDataItem(GlobalNamespace::BloomPrePassLightTypeSO lightType, System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight> lights)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__BloomPrePassLight__LightsDataItem>(lightType, lights))) {}
 void GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem::_ctor(GlobalNamespace::BloomPrePassLightTypeSO lightType, System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight> lights)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BloomPrePassLightTypeSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lightType, lights);
}
//  Writing Method size for method: GlobalNamespace::BloomPrePassLight.get_bloomLightsDict
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO,System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>> (*)()>(&GlobalNamespace::BloomPrePassLight::get_bloomLightsDict)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1f9466c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            "get_bloomLightsDict",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassLight.get_lightsDataItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem> (*)()>(&GlobalNamespace::BloomPrePassLight::get_lightsDataItems)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1f946c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            "get_lightsDataItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassLight.get_isDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::get_isDirty)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassLight),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassLight.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1f9471c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassLight),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassLight.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1f949d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassLight),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassLight.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f94a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassLight.RegisterLight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::RegisterLight)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x1f94720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            "RegisterLight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassLight.UnregisterLight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::UnregisterLight)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1f949d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            "UnregisterLight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassLight.DidRegisterLight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::DidRegisterLight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassLight),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassLight.FillMeshData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)(ByRef<int32_t>, ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassLight__QuadData>, UnityEngine::Matrix4x4, UnityEngine::Matrix4x4, float_t)>(&GlobalNamespace::BloomPrePassLight::FillMeshData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassLight),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassLight.Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::Refresh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassLight),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassLight._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassLight::*)()>(&GlobalNamespace::BloomPrePassLight::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f94ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassLight::__set__lightType(GlobalNamespace::BloomPrePassLightTypeSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BloomPrePassLightTypeSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BloomPrePassLightTypeSO>(value));
}
constexpr GlobalNamespace::BloomPrePassLightTypeSO GlobalNamespace::BloomPrePassLight::__get__lightType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BloomPrePassLightTypeSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::BloomPrePassLight::__set__bloomLightsDict(System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO,System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO,System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>>, "_bloomLightsDict", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get>(std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO,System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>>>(value));
}
 System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO,System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>> GlobalNamespace::BloomPrePassLight::__get__bloomLightsDict()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO,System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>>, "_bloomLightsDict", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get>();
}
 void GlobalNamespace::BloomPrePassLight::__set__lightsDataItems(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem>, "_lightsDataItems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get>(std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem>>(value));
}
 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem> GlobalNamespace::BloomPrePassLight::__get__lightsDataItems()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem>, "_lightsDataItems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get>();
}
constexpr void GlobalNamespace::BloomPrePassLight::__set__registeredWithLightType(GlobalNamespace::BloomPrePassLightTypeSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BloomPrePassLightTypeSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BloomPrePassLightTypeSO>(value));
}
constexpr GlobalNamespace::BloomPrePassLightTypeSO GlobalNamespace::BloomPrePassLight::__get__registeredWithLightType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BloomPrePassLightTypeSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassLight::__set__isRegistered(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::BloomPrePassLight::__get__isRegistered() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassLight::__set__isBeingDestroyed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::BloomPrePassLight::__get__isBeingDestroyed() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO,System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>> GlobalNamespace::BloomPrePassLight::get_bloomLightsDict()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            "get_bloomLightsDict",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO,System::Collections::Generic::HashSet_1<GlobalNamespace::BloomPrePassLight>>, false>(nullptr, ___internal_method);
}
 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem> GlobalNamespace::BloomPrePassLight::get_lightsDataItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            "get_lightsDataItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BloomPrePassLight__LightsDataItem>, false>(nullptr, ___internal_method);
}
 bool GlobalNamespace::BloomPrePassLight::get_isDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            "get_isDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassLight::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassLight::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassLight::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassLight::RegisterLight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            "RegisterLight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassLight::UnregisterLight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            "UnregisterLight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassLight::DidRegisterLight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            "DidRegisterLight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassLight::FillMeshData(ByRef<int32_t> lightNum, ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassLight__QuadData> lightQuads, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix, float_t lineWidth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            "FillMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassLight__QuadData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lightNum, lightQuads, viewMatrix, projectionMatrix, lineWidth);
}
 void GlobalNamespace::BloomPrePassLight::Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::BloomPrePassLight::BloomPrePassLight()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<BloomPrePassLight>())) {}
 void GlobalNamespace::BloomPrePassLight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassLight>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
