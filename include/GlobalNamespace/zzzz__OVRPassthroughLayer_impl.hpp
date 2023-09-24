#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType::GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType  GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType::Reconstructed{0};
constexpr GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType  GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType::UserDefined{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType  GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType::None{0};
constexpr GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType  GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType::GrayscaleToColor{1};
constexpr GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType  GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType::Controls{1};
constexpr GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType  GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType::Custom{2};
constexpr GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType  GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType::Grayscale{3};
constexpr GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType  GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType::ColorAdjustment{4};
// Ctor Parameters [CppParam { name: "meshHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "updateTransform", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorld", ty: "UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance(uint64_t meshHandle, uint64_t instanceHandle, bool updateTransform, UnityEngine::Matrix4x4 localToWorld) noexcept : ::bs_hook::ValueTypeWrapper() {this->meshHandle = meshHandle;
this->instanceHandle = instanceHandle;
this->updateTransform = updateTransform;
this->localToWorld = localToWorld;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance::__set_meshHandle(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance::__get_meshHandle() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance::__set_instanceHandle(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance::__get_instanceHandle() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance::__set_updateTransform(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance::__get_updateTransform() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance::__set_localToWorld(UnityEngine::Matrix4x4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Matrix4x4, 0x14>(this->__instance, std::forward<UnityEngine::Matrix4x4>(value));
}
constexpr UnityEngine::Matrix4x4 GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance::__get_localToWorld() const {
return ::cordl_internals::getInstanceField<UnityEngine::Matrix4x4, 0x14>(this->__instance);
}
// Ctor Parameters [CppParam { name: "meshFilter", ty: "UnityEngine::MeshFilter", modifiers: "", def_value: Some("csnull") }, CppParam { name: "updateTransform", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry::GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry(UnityEngine::MeshFilter meshFilter, bool updateTransform) noexcept : ::bs_hook::ValueTypeWrapper() {this->meshFilter = meshFilter;
this->updateTransform = updateTransform;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry::__set_meshFilter(UnityEngine::MeshFilter value)  {
::cordl_internals::setInstanceField<UnityEngine::MeshFilter, 0x0>(this->__instance, std::forward<UnityEngine::MeshFilter>(value));
}
constexpr UnityEngine::MeshFilter GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry::__get_meshFilter() const {
return ::cordl_internals::getInstanceField<UnityEngine::MeshFilter, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry::__set_updateTransform(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry::__get_updateTransform() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
// Ctor Parameters [CppParam { name: "gameObject", ty: "UnityEngine::GameObject", modifiers: "", def_value: Some("csnull") }, CppParam { name: "updateTransform", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition(UnityEngine::GameObject gameObject, bool updateTransform) noexcept : ::bs_hook::ValueTypeWrapper() {this->gameObject = gameObject;
this->updateTransform = updateTransform;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition::__set_gameObject(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x0>(this->__instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition::__get_gameObject() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition::__set_updateTransform(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition::__get_updateTransform() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0::*)()>(&GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25d8b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0._RemoveSurfaceGeometry_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0::*)(GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition)>(&GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0::_RemoveSurfaceGeometry_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25dbc88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0>::get(),
                            "<RemoveSurfaceGeometry>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0::__set_obj(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0::__get_obj() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0 GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0::_RemoveSurfaceGeometry_b__0(GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0>::get(),
                            "<RemoveSurfaceGeometry>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0::*)()>(&GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25d8dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0._IsSurfaceGeometry_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0::*)(GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition)>(&GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0::_IsSurfaceGeometry_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25dbcf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0>::get(),
                            "<IsSurfaceGeometry>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0::__set_obj(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0::__get_obj() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0 GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0::_IsSurfaceGeometry_b__0(GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0>::get(),
                            "<IsSurfaceGeometry>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.AddSurfaceGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(UnityEngine::GameObject, bool)>(&GlobalNamespace::OVRPassthroughLayer::AddSurfaceGeometry)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x25d8708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "AddSurfaceGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.RemoveSurfaceGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(UnityEngine::GameObject)>(&GlobalNamespace::OVRPassthroughLayer::RemoveSurfaceGeometry)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x25d88f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "RemoveSurfaceGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.IsSurfaceGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRPassthroughLayer::*)(UnityEngine::GameObject)>(&GlobalNamespace::OVRPassthroughLayer::IsSurfaceGeometry)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x25d8ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "IsSurfaceGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.get_textureOpacity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::get_textureOpacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25d8dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "get_textureOpacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.set_textureOpacity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(float_t)>(&GlobalNamespace::OVRPassthroughLayer::set_textureOpacity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25d8dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "set_textureOpacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.get_edgeRenderingEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::get_edgeRenderingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25d8df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "get_edgeRenderingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.set_edgeRenderingEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(bool)>(&GlobalNamespace::OVRPassthroughLayer::set_edgeRenderingEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25d8df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "set_edgeRenderingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.get_edgeColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::get_edgeColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25d8e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "get_edgeColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.set_edgeColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(UnityEngine::Color)>(&GlobalNamespace::OVRPassthroughLayer::set_edgeColor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25d8e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "set_edgeColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.SetColorMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(::ArrayW<UnityEngine::Color>)>(&GlobalNamespace::OVRPassthroughLayer::SetColorMap)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x25d8e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "SetColorMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.SetColorMapControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(float_t, float_t, float_t, UnityEngine::Gradient, GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType)>(&GlobalNamespace::OVRPassthroughLayer::SetColorMapControls)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x25d9264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "SetColorMapControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Gradient>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.SetColorMapMonochromatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(::ArrayW<uint8_t>)>(&GlobalNamespace::OVRPassthroughLayer::SetColorMapMonochromatic)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x25d95c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "SetColorMapMonochromatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.SetBrightnessContrastSaturation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(float_t, float_t, float_t)>(&GlobalNamespace::OVRPassthroughLayer::SetBrightnessContrastSaturation)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25d968c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "SetBrightnessContrastSaturation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.DisableColorMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::DisableColorMap)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25d9944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "DisableColorMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.get_colorMapEditorType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::get_colorMapEditorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25d9970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "get_colorMapEditorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.set_colorMapEditorType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType)>(&GlobalNamespace::OVRPassthroughLayer::set_colorMapEditorType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x25d8f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "set_colorMapEditorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.SetStyleDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::SetStyleDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25d9a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "SetStyleDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.AddDeferredSurfaceGeometries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::AddDeferredSurfaceGeometries)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x25d9a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "AddDeferredSurfaceGeometries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.GetTransformMatrixForPassthroughSurfaceObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (GlobalNamespace::OVRPassthroughLayer::*)(UnityEngine::Matrix4x4)>(&GlobalNamespace::OVRPassthroughLayer::GetTransformMatrixForPassthroughSurfaceObject)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x25d9f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "GetTransformMatrixForPassthroughSurfaceObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.CreateAndAddMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRPassthroughLayer::*)(UnityEngine::GameObject, ByRef<uint64_t>, ByRef<uint64_t>, ByRef<UnityEngine::Matrix4x4>)>(&GlobalNamespace::OVRPassthroughLayer::CreateAndAddMesh)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x25d9c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "CreateAndAddMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Matrix4x4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.DestroySurfaceGeometries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(bool)>(&GlobalNamespace::OVRPassthroughLayer::DestroySurfaceGeometries)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x25da550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "DestroySurfaceGeometries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.UpdateSurfaceGeometryTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::UpdateSurfaceGeometryTransforms)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x25da7d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "UpdateSurfaceGeometryTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.UpdateSurfaceGeometryTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(uint64_t, UnityEngine::Matrix4x4)>(&GlobalNamespace::OVRPassthroughLayer::UpdateSurfaceGeometryTransform)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x25daaec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "UpdateSurfaceGeometryTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.AllocateColorMapData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(uint32_t)>(&GlobalNamespace::OVRPassthroughLayer::AllocateColorMapData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x25d8fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "AllocateColorMapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.DeallocateColorMapData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::DeallocateColorMapData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x25d9978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "DeallocateColorMapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.CreateNeutralColorMapGradient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Gradient (*)()>(&GlobalNamespace::OVRPassthroughLayer::CreateNeutralColorMapGradient)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x25d93f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "CreateNeutralColorMapGradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.HasControlsBasedColorMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::HasControlsBasedColorMap)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25dadac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "HasControlsBasedColorMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.UpdateColorMapFromControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(bool)>(&GlobalNamespace::OVRPassthroughLayer::UpdateColorMapFromControls)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x25d9700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "UpdateColorMapFromControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.computeBrightnessContrastPosterizeMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, float_t, float_t, float_t)>(&GlobalNamespace::OVRPassthroughLayer::computeBrightnessContrastPosterizeMap)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x25dadd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "computeBrightnessContrastPosterizeMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.WriteColorToColorMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(int32_t, ByRef<UnityEngine::Color>)>(&GlobalNamespace::OVRPassthroughLayer::WriteColorToColorMap)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x25d90dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "WriteColorToColorMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Color>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.WriteFloatToColorMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(int32_t, float_t)>(&GlobalNamespace::OVRPassthroughLayer::WriteFloatToColorMap)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25dafa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "WriteFloatToColorMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.WriteBrightnessContrastSaturationColorMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)(float_t, float_t, float_t)>(&GlobalNamespace::OVRPassthroughLayer::WriteBrightnessContrastSaturationColorMap)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x25daf4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "WriteBrightnessContrastSaturationColorMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.SyncToOverlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::SyncToOverlay)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x25db030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "SyncToOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.get_overlayShape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::get_overlayShape)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25db2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "get_overlayShape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::Awake)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x25db2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25db4e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::LateUpdate)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x25db4e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::OnEnable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x25db854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x25db978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::OnDestroy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25dba48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRPassthroughLayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::*)()>(&GlobalNamespace::OVRPassthroughLayer::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x25dba50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_projectionSurfaceType(GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType GlobalNamespace::OVRPassthroughLayer::__get_projectionSurfaceType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_overlayType(GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType GlobalNamespace::OVRPassthroughLayer::__get_overlayType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_compositionDepth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVRPassthroughLayer::__get_compositionDepth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_hidden(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRPassthroughLayer::__get_hidden() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_overridePerLayerColorScaleAndOffset(bool value)  {
::cordl_internals::setInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRPassthroughLayer::__get_overridePerLayerColorScaleAndOffset() const {
return ::cordl_internals::getInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorScale(UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector4, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector4>(value));
}
constexpr UnityEngine::Vector4 GlobalNamespace::OVRPassthroughLayer::__get_colorScale() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector4, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorOffset(UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector4, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector4>(value));
}
constexpr UnityEngine::Vector4 GlobalNamespace::OVRPassthroughLayer::__get_colorOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector4, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorType_(GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorType_() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorGradient(UnityEngine::Gradient value)  {
::cordl_internals::setInstanceField<UnityEngine::Gradient, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Gradient>(value));
}
constexpr UnityEngine::Gradient GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorGradient() const {
return ::cordl_internals::getInstanceField<UnityEngine::Gradient, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorGradientOld(UnityEngine::Gradient value)  {
::cordl_internals::setInstanceField<UnityEngine::Gradient, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Gradient>(value));
}
constexpr UnityEngine::Gradient GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorGradientOld() const {
return ::cordl_internals::getInstanceField<UnityEngine::Gradient, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorContrast(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorContrast() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorContrast_(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorContrast_() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorBrightness(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorBrightness() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorBrightness_(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorBrightness_() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorPosterize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorPosterize() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorPosterize_(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorPosterize_() const {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorSaturation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorSaturation() const {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorSaturation_(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorSaturation_() const {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_cameraRig(GlobalNamespace::OVRCameraRig value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRCameraRig, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRCameraRig>(value));
}
constexpr GlobalNamespace::OVRCameraRig GlobalNamespace::OVRPassthroughLayer::__get_cameraRig() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRCameraRig, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_cameraRigInitialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRPassthroughLayer::__get_cameraRigInitialized() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_auxGameObject(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRPassthroughLayer::__get_auxGameObject() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_passthroughOverlay(GlobalNamespace::OVROverlay value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVROverlay, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVROverlay>(value));
}
constexpr GlobalNamespace::OVROverlay GlobalNamespace::OVRPassthroughLayer::__get_passthroughOverlay() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVROverlay, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_surfaceGameObjects(System::Collections::Generic::Dictionary_2<UnityEngine::GameObject,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::GameObject,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::GameObject,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::GameObject,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance> GlobalNamespace::OVRPassthroughLayer::__get_surfaceGameObjects() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::GameObject,GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_deferredSurfaceGameObjects(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition> GlobalNamespace::OVRPassthroughLayer::__get_deferredSurfaceGameObjects() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_serializedSurfaceGeometry(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry> GlobalNamespace::OVRPassthroughLayer::__get_serializedSurfaceGeometry() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_textureOpacity_(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRPassthroughLayer::__get_textureOpacity_() const {
return ::cordl_internals::getInstanceField<float_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_edgeRenderingEnabled_(bool value)  {
::cordl_internals::setInstanceField<bool, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRPassthroughLayer::__get_edgeRenderingEnabled_() const {
return ::cordl_internals::getInstanceField<bool, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_edgeColor_(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::OVRPassthroughLayer::__get_edgeColor_() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapType(GlobalNamespace::GlobalNamespace__OVRPlugin__InsightPassthroughColorMapType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__InsightPassthroughColorMapType, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__InsightPassthroughColorMapType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__InsightPassthroughColorMapType GlobalNamespace::OVRPassthroughLayer::__get_colorMapType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__InsightPassthroughColorMapType, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapData(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::OVRPassthroughLayer::__get_colorMapData() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_tmpColorMapData(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::OVRPassthroughLayer::__get_tmpColorMapData() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapDataHandle(System::Runtime::InteropServices::GCHandle value)  {
::cordl_internals::setInstanceField<System::Runtime::InteropServices::GCHandle, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::InteropServices::GCHandle>(value));
}
constexpr System::Runtime::InteropServices::GCHandle GlobalNamespace::OVRPassthroughLayer::__get_colorMapDataHandle() const {
return ::cordl_internals::getInstanceField<System::Runtime::InteropServices::GCHandle, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_styleDirty(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRPassthroughLayer::__get_styleDirty() const {
return ::cordl_internals::getInstanceField<bool, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OVRPassthroughLayer::__set_colorMapNeutralGradient(UnityEngine::Gradient value)  {
::cordl_internals::setStaticField<UnityEngine::Gradient, "colorMapNeutralGradient", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get>(std::forward<UnityEngine::Gradient>(value));
}
 UnityEngine::Gradient GlobalNamespace::OVRPassthroughLayer::__get_colorMapNeutralGradient()  {
return ::cordl_internals::getStaticField<UnityEngine::Gradient, "colorMapNeutralGradient", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get>();
}
/// @param updateTransform: bool (default: false)
 void GlobalNamespace::OVRPassthroughLayer::AddSurfaceGeometry(UnityEngine::GameObject obj, bool updateTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "AddSurfaceGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, updateTransform);
}
 void GlobalNamespace::OVRPassthroughLayer::RemoveSurfaceGeometry(UnityEngine::GameObject obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "RemoveSurfaceGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool GlobalNamespace::OVRPassthroughLayer::IsSurfaceGeometry(UnityEngine::GameObject obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "IsSurfaceGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 float_t GlobalNamespace::OVRPassthroughLayer::get_textureOpacity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "get_textureOpacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRPassthroughLayer::set_textureOpacity(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "set_textureOpacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::OVRPassthroughLayer::get_edgeRenderingEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "get_edgeRenderingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRPassthroughLayer::set_edgeRenderingEnabled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "set_edgeRenderingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Color GlobalNamespace::OVRPassthroughLayer::get_edgeColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "get_edgeColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRPassthroughLayer::set_edgeColor(UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "set_edgeColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::OVRPassthroughLayer::SetColorMap(::ArrayW<UnityEngine::Color> values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "SetColorMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Color>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, values);
}
/// @param brightness: float_t (default: 0)
/// @param posterize: float_t (default: 0)
/// @param gradient: UnityEngine::Gradient (default: csnull)
/// @param colorMapType: GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType (default: 1)
 void GlobalNamespace::OVRPassthroughLayer::SetColorMapControls(float_t contrast, float_t brightness, float_t posterize, UnityEngine::Gradient gradient, GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType colorMapType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "SetColorMapControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Gradient>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, contrast, brightness, posterize, gradient, colorMapType);
}
 void GlobalNamespace::OVRPassthroughLayer::SetColorMapMonochromatic(::ArrayW<uint8_t> values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "SetColorMapMonochromatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, values);
}
/// @param brightness: float_t (default: 0)
/// @param contrast: float_t (default: 0)
/// @param saturation: float_t (default: 0)
 void GlobalNamespace::OVRPassthroughLayer::SetBrightnessContrastSaturation(float_t brightness, float_t contrast, float_t saturation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "SetBrightnessContrastSaturation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, brightness, contrast, saturation);
}
 void GlobalNamespace::OVRPassthroughLayer::DisableColorMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "DisableColorMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::OVRPassthroughLayer::get_colorMapEditorType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "get_colorMapEditorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRPassthroughLayer::set_colorMapEditorType(GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "set_colorMapEditorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::OVRPassthroughLayer::SetStyleDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "SetStyleDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRPassthroughLayer::AddDeferredSurfaceGeometries()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "AddDeferredSurfaceGeometries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Matrix4x4 GlobalNamespace::OVRPassthroughLayer::GetTransformMatrixForPassthroughSurfaceObject(UnityEngine::Matrix4x4 worldFromObj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "GetTransformMatrixForPassthroughSurfaceObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Matrix4x4, false>(const_cast<void*>(instance), ___internal_method, worldFromObj);
}
 bool GlobalNamespace::OVRPassthroughLayer::CreateAndAddMesh(UnityEngine::GameObject obj, ByRef<uint64_t> meshHandle, ByRef<uint64_t> instanceHandle, ByRef<UnityEngine::Matrix4x4> localToWorld)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "CreateAndAddMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Matrix4x4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj, meshHandle, instanceHandle, localToWorld);
}
/// @param addBackToDeferredQueue: bool (default: false)
 void GlobalNamespace::OVRPassthroughLayer::DestroySurfaceGeometries(bool addBackToDeferredQueue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "DestroySurfaceGeometries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, addBackToDeferredQueue);
}
 void GlobalNamespace::OVRPassthroughLayer::UpdateSurfaceGeometryTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "UpdateSurfaceGeometryTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRPassthroughLayer::UpdateSurfaceGeometryTransform(uint64_t instanceHandle, UnityEngine::Matrix4x4 localToWorld)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "UpdateSurfaceGeometryTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, instanceHandle, localToWorld);
}
/// @param size: uint32_t (default: 4096u)
 void GlobalNamespace::OVRPassthroughLayer::AllocateColorMapData(uint32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "AllocateColorMapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, size);
}
 void GlobalNamespace::OVRPassthroughLayer::DeallocateColorMapData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "DeallocateColorMapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Gradient GlobalNamespace::OVRPassthroughLayer::CreateNeutralColorMapGradient()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "CreateNeutralColorMapGradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Gradient, false>(nullptr, ___internal_method);
}
 bool GlobalNamespace::OVRPassthroughLayer::HasControlsBasedColorMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "HasControlsBasedColorMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param forceUpdate: bool (default: false)
 void GlobalNamespace::OVRPassthroughLayer::UpdateColorMapFromControls(bool forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "UpdateColorMapFromControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, forceUpdate);
}
 void GlobalNamespace::OVRPassthroughLayer::computeBrightnessContrastPosterizeMap(::ArrayW<uint8_t> result, float_t brightness, float_t contrast, float_t posterize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "computeBrightnessContrastPosterizeMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, result, brightness, contrast, posterize);
}
 void GlobalNamespace::OVRPassthroughLayer::WriteColorToColorMap(int32_t colorIndex, ByRef<UnityEngine::Color> color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "WriteColorToColorMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Color>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, colorIndex, color);
}
 void GlobalNamespace::OVRPassthroughLayer::WriteFloatToColorMap(int32_t index, float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "WriteFloatToColorMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, value);
}
 void GlobalNamespace::OVRPassthroughLayer::WriteBrightnessContrastSaturationColorMap(float_t brightness, float_t contrast, float_t saturation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "WriteBrightnessContrastSaturationColorMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, brightness, contrast, saturation);
}
 void GlobalNamespace::OVRPassthroughLayer::SyncToOverlay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "SyncToOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape GlobalNamespace::OVRPassthroughLayer::get_overlayShape()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "get_overlayShape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRPassthroughLayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRPassthroughLayer::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRPassthroughLayer::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRPassthroughLayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRPassthroughLayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRPassthroughLayer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::OVRPassthroughLayer GlobalNamespace::OVRPassthroughLayer::New_ctor()  {
GlobalNamespace::OVRPassthroughLayer o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::OVRPassthroughLayer>())};
return o;
}
 void GlobalNamespace::OVRPassthroughLayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRPassthroughLayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
