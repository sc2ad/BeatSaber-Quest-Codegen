#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__MeshSyncState_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__MeshArrays_def.hpp"
#include "UnityEngine/zzzz__HideFlags_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__UnwrapParameters_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SharedVertex_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__RefreshMask_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState::____UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState  ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState::SharedVertex{1u};
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState  ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState::SharedTexture{2u};
//  Writing Method size for method: ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope::*)(::UnityEngine::ProBuilder::ProBuilderMesh)>(&::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29c6288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope::*)()>(&::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29cb610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Mesh", ty: "::UnityEngine::ProBuilder::ProBuilderMesh", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_VersionIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope(::UnityEngine::ProBuilder::ProBuilderMesh m_Mesh, uint16_t m_VersionIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Mesh = m_Mesh;
this->m_VersionIndex = m_VersionIndex;
}
constexpr void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope::__set_m_Mesh(::UnityEngine::ProBuilder::ProBuilderMesh value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::ProBuilderMesh, 0x0>(this->__instance, std::forward<::UnityEngine::ProBuilder::ProBuilderMesh>(value));
}
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope::__get_m_Mesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::ProBuilderMesh, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope::__set_m_VersionIndex(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x8>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope::__get_m_VersionIndex() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x8>(this->__instance);
}
 void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope::_ctor(::UnityEngine::ProBuilder::ProBuilderMesh mesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, mesh);
}
 void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::*)()>(&::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29cb694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c._SetUVs_b__114_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::*)(::UnityEngine::Vector4)>(&::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::_SetUVs_b__114_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29cb69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get(),
                            "<SetUVs>b__114_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c._SetUVs_b__114_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::*)(::UnityEngine::Vector4)>(&::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::_SetUVs_b__114_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29cb6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get(),
                            "<SetUVs>b__114_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c._get_indexCount_b__122_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::*)(::UnityEngine::ProBuilder::Face)>(&::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::_get_indexCount_b__122_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29cb6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get(),
                            "<get_indexCount>b__122_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c._get_triangleCount_b__124_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::*)(::UnityEngine::ProBuilder::Face)>(&::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::_get_triangleCount_b__124_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29cb6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get(),
                            "<get_triangleCount>b__124_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c._CopyFrom_b__165_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Face (::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::*)(::UnityEngine::ProBuilder::Face)>(&::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::_CopyFrom_b__165_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x29cb6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get(),
                            "<CopyFrom>b__165_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::__set___9(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c value)  {
::cordl_internals::setStaticField<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get>(std::forward<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>(value));
}
 ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::__get___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get>();
}
 void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::__set___9__114_0(::System::Func_2<::UnityEngine::Vector4,::UnityEngine::Vector2> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector4,::UnityEngine::Vector2>, "<>9__114_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get>(std::forward<::System::Func_2<::UnityEngine::Vector4,::UnityEngine::Vector2>>(value));
}
 ::System::Func_2<::UnityEngine::Vector4,::UnityEngine::Vector2> ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::__get___9__114_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector4,::UnityEngine::Vector2>, "<>9__114_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get>();
}
 void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::__set___9__114_1(::System::Func_2<::UnityEngine::Vector4,::UnityEngine::Vector2> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector4,::UnityEngine::Vector2>, "<>9__114_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get>(std::forward<::System::Func_2<::UnityEngine::Vector4,::UnityEngine::Vector2>>(value));
}
 ::System::Func_2<::UnityEngine::Vector4,::UnityEngine::Vector2> ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::__get___9__114_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector4,::UnityEngine::Vector2>, "<>9__114_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get>();
}
 void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::__set___9__122_0(::System::Func_2<::UnityEngine::ProBuilder::Face,int32_t> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face,int32_t>, "<>9__122_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get>(std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face,int32_t>>(value));
}
 ::System::Func_2<::UnityEngine::ProBuilder::Face,int32_t> ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::__get___9__122_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face,int32_t>, "<>9__122_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get>();
}
 void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::__set___9__124_0(::System::Func_2<::UnityEngine::ProBuilder::Face,int32_t> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face,int32_t>, "<>9__124_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get>(std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face,int32_t>>(value));
}
 ::System::Func_2<::UnityEngine::ProBuilder::Face,int32_t> ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::__get___9__124_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face,int32_t>, "<>9__124_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get>();
}
 void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::__set___9__165_0(::System::Func_2<::UnityEngine::ProBuilder::Face,::UnityEngine::ProBuilder::Face> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face,::UnityEngine::ProBuilder::Face>, "<>9__165_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get>(std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face,::UnityEngine::ProBuilder::Face>>(value));
}
 ::System::Func_2<::UnityEngine::ProBuilder::Face,::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::__get___9__165_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face,::UnityEngine::ProBuilder::Face>, "<>9__165_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get>();
}
// Ctor Parameters []
 ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::____UnityEngine__ProBuilder__ProBuilderMesh____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__ProBuilder__ProBuilderMesh____c>())) {}
 void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Vector2 ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::_SetUVs_b__114_0(::UnityEngine::Vector4 x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get(),
                            "<SetUVs>b__114_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::UnityEngine::Vector2 ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::_SetUVs_b__114_1(::UnityEngine::Vector4 x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get(),
                            "<SetUVs>b__114_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, x);
}
 int32_t ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::_get_indexCount_b__122_0(::UnityEngine::ProBuilder::Face x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get(),
                            "<get_indexCount>b__122_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
 int32_t ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::_get_triangleCount_b__124_0(::UnityEngine::ProBuilder::Face x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get(),
                            "<get_triangleCount>b__124_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::UnityEngine::ProBuilder::Face ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c::_CopyFrom_b__165_0(::UnityEngine::ProBuilder::Face x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c>::get(),
                            "<CopyFrom>b__165_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0::*)()>(&::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c7c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0._GetUnusedTextureGroup_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0::*)(::UnityEngine::ProBuilder::Face)>(&::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0::_GetUnusedTextureGroup_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29cb748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0>::get(),
                            "<GetUnusedTextureGroup>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0::__set_i(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0::__get_i() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0>())) {}
 void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0::_GetUnusedTextureGroup_b__0(::UnityEngine::ProBuilder::Face element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0>::get(),
                            "<GetUnusedTextureGroup>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, element);
}
//  Writing Method size for method: ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0::*)()>(&::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c7d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0._UnusedElementGroup_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0::*)(::UnityEngine::ProBuilder::Face)>(&::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0::_UnusedElementGroup_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29cb76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0>::get(),
                            "<UnusedElementGroup>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0::__set_i(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0::__get_i() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0>())) {}
 void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0::_UnusedElementGroup_b__0(::UnityEngine::ProBuilder::Face element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0>::get(),
                            "<UnusedElementGroup>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, element);
}
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_userCollisions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_userCollisions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c2dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_userCollisions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_userCollisions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(bool)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_userCollisions)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29c2db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_userCollisions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_unwrapParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::UnwrapParameters (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_unwrapParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c2dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_unwrapParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_unwrapParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::UnwrapParameters)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_unwrapParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c2dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_unwrapParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::UnwrapParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_renderer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MeshRenderer (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_renderer)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29bfdcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_renderer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_filter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MeshFilter (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_filter)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x29c2dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_filter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_versionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_versionIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c2e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_versionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_preserveMeshAssetOnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_preserveMeshAssetOnDestroy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c2e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_preserveMeshAssetOnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_preserveMeshAssetOnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(bool)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_preserveMeshAssetOnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29c2e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_preserveMeshAssetOnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.HasArrays
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::MeshArrays)>(&::UnityEngine::ProBuilder::ProBuilderMesh::HasArrays)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x29be4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "HasArrays",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshArrays>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_facesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_facesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c2ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_facesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_facesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::ProBuilder::Face>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_facesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c2eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_facesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_faces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_faces)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29c2eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_faces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_faces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_faces)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x29c2f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_faces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.InvalidateSharedVertexLookup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::InvalidateSharedVertexLookup)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x29c2fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "InvalidateSharedVertexLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.InvalidateSharedTextureLookup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::InvalidateSharedTextureLookup)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x29c307c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "InvalidateSharedTextureLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.InvalidateFaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::InvalidateFaces)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x29c3124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "InvalidateFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.InvalidateCaches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::InvalidateCaches)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x29c3434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "InvalidateCaches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_sharedVerticesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::SharedVertex> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVerticesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c3460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_sharedVerticesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_sharedVerticesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::ProBuilder::SharedVertex>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_sharedVerticesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c3468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_sharedVerticesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::SharedVertex>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_sharedVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVertices)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29c3470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_sharedVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_sharedVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_sharedVertices)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x29c34ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_sharedVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_sharedVertexLookup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,int32_t> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVertexLookup)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x29c3730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_sharedVertexLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSharedVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetSharedVertices)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29c37d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetSharedVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_sharedTextures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::SharedVertex> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c3848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_sharedTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_sharedTextures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::ProBuilder::SharedVertex>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_sharedTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c3850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_sharedTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::SharedVertex>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_sharedTextureLookup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,int32_t> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedTextureLookup)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x29c3858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_sharedTextureLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSharedTextures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetSharedTextures)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29c38f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetSharedTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_positionsInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_positionsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c396c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_positionsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_positionsInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_positionsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c3974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_positionsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_positions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Vector3> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_positions)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29c397c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_positions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_positions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_positions)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x29c39f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_positions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Vertex> (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<int32_t>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetVertices)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x29bf394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetVerticesInList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetVerticesInList)> {
  constexpr static std::size_t size = 0x888;
  constexpr static std::size_t addrs = 0x29c3a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetVerticesInList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex>, bool)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetVertices)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x29c4324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_normals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Vector3> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_normals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x29c470c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_normals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_normalsInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_normalsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c4794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_normalsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_normalsInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_normalsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c479c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_normalsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetNormals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x29be9f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_colorsInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_colorsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c47a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_colorsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_colorsInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::Color>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_colorsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c47ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_colorsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_colors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Color> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_colors)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x29c47b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_colors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_colors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::Color>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_colors)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x29c483c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_colors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Color>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetColors)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x29c4940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_tangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Vector4> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_tangents)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x29c49e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_tangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_tangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_tangents)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x29c4a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_tangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_tangentsInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector4> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_tangentsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c4b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_tangentsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_tangentsInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::Vector4>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_tangentsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c4b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_tangentsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetTangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector4> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetTangents)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x29bea7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_texturesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_texturesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c4b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_texturesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_texturesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::Vector2>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_texturesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c4b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_texturesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_textures2Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector4> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_textures2Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c4b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_textures2Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_textures2Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_textures2Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c4ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_textures2Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_textures3Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector4> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_textures3Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c4ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_textures3Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_textures3Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_textures3Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c4bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_textures3Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_textures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Vector2> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_textures)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x29c4bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_textures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_textures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_textures)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x29c4c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_textures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetUVs)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x29be6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector2> (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetUVs)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x29c4d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetUVs)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x29c4e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_faceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_faceCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29c13d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_faceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_vertexCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_vertexCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29bf340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_vertexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_edgeCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_edgeCount)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x29c511c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_edgeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_indexCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_indexCount)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x29c51a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_indexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_triangleCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_triangleCount)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x29c52bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_triangleCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.add_meshWillBeDestroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::add_meshWillBeDestroyed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x29c53e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "add_meshWillBeDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.remove_meshWillBeDestroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::remove_meshWillBeDestroyed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x29c54d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "remove_meshWillBeDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.add_meshWasInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::add_meshWasInitialized)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x29c55c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "add_meshWasInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.remove_meshWasInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::remove_meshWasInitialized)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x29c56b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "remove_meshWasInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.add_componentWillBeDestroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::add_componentWillBeDestroyed)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x29c57a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "add_componentWillBeDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.remove_componentWillBeDestroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::remove_componentWillBeDestroyed)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x29c589c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "remove_componentWillBeDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.add_componentHasBeenReset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::add_componentHasBeenReset)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x29c5990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "add_componentHasBeenReset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.remove_componentHasBeenReset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::remove_componentHasBeenReset)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x29c5a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "remove_componentHasBeenReset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.add_elementSelectionChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::add_elementSelectionChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x29c5b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "add_elementSelectionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.remove_elementSelectionChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::remove_elementSelectionChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x29c5c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "remove_elementSelectionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_mesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_mesh)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x29bffa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_mesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::Mesh)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c5d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_id)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29beb04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_meshSyncState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::MeshSyncState (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_meshSyncState)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x29c5d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_meshSyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_meshFormatVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_meshFormatVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c5e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_meshFormatVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::Awake)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x29c5e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::Reset)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x29c62a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::OnDestroy)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x29c6378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.IncrementVersionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::IncrementVersionIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29c46fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "IncrementVersionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::Clear)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x29c45f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.EnsureMeshFilterIsAssigned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::EnsureMeshFilterIsAssigned)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x29c5fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "EnsureMeshFilterIsAssigned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.CreateInstanceWithPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ProBuilderMesh (*)(::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::CreateInstanceWithPoints)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x29c6588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "CreateInstanceWithPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ProBuilderMesh (*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::Create)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x29c68d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ProBuilderMesh (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::Create)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x29c6960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ProBuilderMesh (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex>, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face>, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex>, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex>, ::System::Collections::Generic::IList_1<::UnityEngine::Material>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::Create)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x29c6b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Material>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GeometryWithPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GeometryWithPoints)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x29c66a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GeometryWithPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RebuildWithPositionsAndFaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::RebuildWithPositionsAndFaces)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x29c6a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "RebuildWithPositionsAndFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Rebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::Rebuild)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29bf358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.ToMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::MeshTopology)>(&::UnityEngine::ProBuilder::ProBuilderMesh::ToMesh)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x29c6ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "ToMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.MakeUnique
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::MakeUnique)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29c714c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "MakeUnique",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.CopyFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::ProBuilderMesh)>(&::UnityEngine::ProBuilder::ProBuilderMesh::CopyFrom)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x29c71c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "CopyFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::RefreshMask)>(&::UnityEngine::ProBuilder::ProBuilderMesh::Refresh)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x29c704c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::RefreshMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.EnsureMeshColliderIsAssigned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::EnsureMeshColliderIsAssigned)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x29c60f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "EnsureMeshColliderIsAssigned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetUnusedTextureGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetUnusedTextureGroup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x29c7b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetUnusedTextureGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.IsValidTextureGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::IsValidTextureGroup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29c7c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "IsValidTextureGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.UnusedElementGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::UnusedElementGroup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x29c7c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "UnusedElementGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RefreshUV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::RefreshUV)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x29c74a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "RefreshUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetGroupUV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::AutoUnwrapSettings, int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetGroupUV)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x29c7d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetGroupUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RefreshColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::RefreshColors)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29c7a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "RefreshColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetFaceColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::Face, ::UnityEngine::Color)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetFaceColor)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x29c7e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetFaceColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>, ::UnityEngine::Material)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetMaterial)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x29c81bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RefreshNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::RefreshNormals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x29c7a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "RefreshNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RefreshTangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::RefreshTangents)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x29c7ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "RefreshTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetSharedVertexHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetSharedVertexHandle)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x29c8720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetSharedVertexHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetSharedVertexHandles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<int32_t> (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetSharedVertexHandles)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x29c8888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetSharedVertexHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetCoincidentVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<int32_t> (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x29c8c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetCoincidentVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetCoincidentVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>, ::System::Collections::Generic::List_1<int32_t>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x29c9230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetCoincidentVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetCoincidentVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>, ::System::Collections::Generic::List_1<int32_t>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x29c97f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetCoincidentVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetCoincidentVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>, ::System::Collections::Generic::List_1<int32_t>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x29c8ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetCoincidentVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetCoincidentVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t, ::System::Collections::Generic::List_1<int32_t>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x29c9e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetCoincidentVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetVerticesCoincident
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetVerticesCoincident)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x29ca054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetVerticesCoincident",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetTexturesCoincident
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetTexturesCoincident)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29ca10c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetTexturesCoincident",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.AddToSharedVertex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t, int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::AddToSharedVertex)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x29ca14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "AddToSharedVertex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.AddSharedVertex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::SharedVertex)>(&::UnityEngine::ProBuilder::ProBuilderMesh::AddSharedVertex)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x29ca1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "AddSharedVertex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::SharedVertex>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ca294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_selectable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(bool)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_selectable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29ca29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_selectable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedFaceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x29ca2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedFaceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedVertexCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedVertexCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x29ca2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedVertexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedEdgeCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdgeCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x29ca2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedEdgeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedSharedVerticesCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedSharedVerticesCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29ca2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedSharedVerticesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedCoincidentVertexCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedCoincidentVertexCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29ca864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedCoincidentVertexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedSharedVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedSharedVertices)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29ca87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedSharedVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedCoincidentVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedCoincidentVertices)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29ca894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedCoincidentVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.CacheSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::CacheSelection)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x29ca314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "CacheSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetSelectedFaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetSelectedFaces)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x29ca8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetSelectedFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedFaceIndexes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceIndexes)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29ca9b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedFaceIndexes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedVertices)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29caa30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedEdges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdges)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29caaac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedEdges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedFacesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFacesInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29cab28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedFacesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_selectedFacesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::ProBuilder::Face>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_selectedFacesInternal)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x29cab2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_selectedFacesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedFaceIndicesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceIndicesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29cabf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedFaceIndicesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_selectedFaceIndicesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<int32_t>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_selectedFaceIndicesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29cabfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_selectedFaceIndicesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedEdgesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Edge> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdgesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29cac04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedEdgesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_selectedEdgesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::ProBuilder::Edge>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_selectedEdgesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29cac0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_selectedEdgesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Edge>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedIndexesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedIndexesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29cac14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedIndexesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_selectedIndexesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<int32_t>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_selectedIndexesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29cac1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_selectedIndexesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetActiveFace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Face (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetActiveFace)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29cac24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetActiveFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetActiveEdge
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetActiveEdge)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x29cac80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetActiveEdge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetActiveVertex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetActiveVertex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x29cad08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetActiveVertex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.AddToFaceSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::AddToFaceSelection)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29cad44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "AddToFaceSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSelectedFaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedFaces)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x29cafb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetSelectedFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSelectedFaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedFaces)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x29cadb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetSelectedFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSelectedEdges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedEdges)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x29cb070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetSelectedEdges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSelectedVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedVertices)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x29cb188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetSelectedVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RemoveFromFaceSelectionAtIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::RemoveFromFaceSelectionAtIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x29cb2d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "RemoveFromFaceSelectionAtIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.ClearSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::ClearSelection)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x29c61f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "ClearSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x29cb33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh._set_selectedFacesInternal_b__225_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::Face)>(&::UnityEngine::ProBuilder::ProBuilderMesh::_set_selectedFacesInternal_b__225_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29cb4f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "<set_selectedFacesInternal>b__225_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh._SetSelectedFaces_b__239_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::Face)>(&::UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__239_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29cb548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "<SetSelectedFaces>b__239_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh._SetSelectedFaces_b__240_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t> (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__240_0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x29cb5a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "<SetSelectedFaces>b__240_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh._SetSelectedFaces_b__240_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__240_1)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x29cb5d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "<SetSelectedFaces>b__240_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::HideFlags  ::UnityEngine::ProBuilder::ProBuilderMesh::k_MeshFilterHideFlags{10};
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_MeshFormatVersion(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_MeshFormatVersion() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_Faces(::ArrayW<::UnityEngine::ProBuilder::Face> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::ProBuilder::Face>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::ProBuilder::Face>>(value));
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_Faces() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ProBuilder::Face>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_SharedVertices(::ArrayW<::UnityEngine::ProBuilder::SharedVertex> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::ProBuilder::SharedVertex>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::ProBuilder::SharedVertex>>(value));
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_SharedVertices() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ProBuilder::SharedVertex>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_CacheValid(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState>(value));
}
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_CacheValid() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_SharedVertexLookup(::System::Collections::Generic::Dictionary_2<int32_t,int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_SharedVertexLookup() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_SharedTextures(::ArrayW<::UnityEngine::ProBuilder::SharedVertex> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::ProBuilder::SharedVertex>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::ProBuilder::SharedVertex>>(value));
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_SharedTextures() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ProBuilder::SharedVertex>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_SharedTextureLookup(::System::Collections::Generic::Dictionary_2<int32_t,int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_SharedTextureLookup() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_Positions(::ArrayW<::UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_Positions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_Textures0(::ArrayW<::UnityEngine::Vector2> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector2>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Vector2>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector2> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_Textures0() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector2>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_Textures2(::System::Collections::Generic::List_1<::UnityEngine::Vector4> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector4>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector4>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_Textures2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector4>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_Textures3(::System::Collections::Generic::List_1<::UnityEngine::Vector4> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector4>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector4>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_Textures3() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector4>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_Tangents(::ArrayW<::UnityEngine::Vector4> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector4>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Vector4>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector4> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_Tangents() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_Normals(::ArrayW<::UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_Normals() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_Colors(::ArrayW<::UnityEngine::Color> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Color>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Color>>(value));
}
constexpr ::ArrayW<::UnityEngine::Color> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_Colors() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Color>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set__userCollisions_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::ProBuilder::ProBuilderMesh::__get__userCollisions_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_UnwrapParameters(::UnityEngine::ProBuilder::UnwrapParameters value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::UnwrapParameters, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::UnwrapParameters>(value));
}
constexpr ::UnityEngine::ProBuilder::UnwrapParameters ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_UnwrapParameters() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::UnwrapParameters, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_PreserveMeshAssetOnDestroy(bool value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_PreserveMeshAssetOnDestroy() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_assetGuid(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::ProBuilder::ProBuilderMesh::__get_assetGuid() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_Mesh(::UnityEngine::Mesh value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Mesh>(value));
}
constexpr ::UnityEngine::Mesh ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_Mesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_MeshRenderer(::UnityEngine::MeshRenderer value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshRenderer, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::MeshRenderer>(value));
}
constexpr ::UnityEngine::MeshRenderer ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_MeshRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_MeshFilter(::UnityEngine::MeshFilter value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshFilter, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::MeshFilter>(value));
}
constexpr ::UnityEngine::MeshFilter ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_MeshFilter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshFilter, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_VersionIndex(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_VersionIndex() const {
return ::cordl_internals::getInstanceField<uint16_t, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_meshWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>, "meshWillBeDestroyed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get>(std::forward<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>(value));
}
 ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_meshWillBeDestroyed()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>, "meshWillBeDestroyed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get>();
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_meshWasInitialized(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>, "meshWasInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get>(std::forward<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>(value));
}
 ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_meshWasInitialized()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>, "meshWasInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get>();
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_componentWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>, "componentWillBeDestroyed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get>(std::forward<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>(value));
}
 ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_componentWillBeDestroyed()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>, "componentWillBeDestroyed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get>();
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_componentHasBeenReset(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>, "componentHasBeenReset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get>(std::forward<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>(value));
}
 ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_componentHasBeenReset()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>, "componentHasBeenReset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get>();
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_elementSelectionChanged(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>, "elementSelectionChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get>(std::forward<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>(value));
}
 ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_elementSelectionChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>, "elementSelectionChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get>();
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_s_CachedHashSet(::System::Collections::Generic::HashSet_1<int32_t> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>, "s_CachedHashSet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get>(std::forward<::System::Collections::Generic::HashSet_1<int32_t>>(value));
}
 ::System::Collections::Generic::HashSet_1<int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_s_CachedHashSet()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>, "s_CachedHashSet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get>();
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_IsSelectable(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc2>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_IsSelectable() const {
return ::cordl_internals::getInstanceField<bool, 0xc2>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_SelectedFaces(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_SelectedFaces() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_SelectedEdges(::ArrayW<::UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::ProBuilder::Edge>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::ProBuilder::Edge>>(value));
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_SelectedEdges() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ProBuilder::Edge>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_SelectedVertices(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_SelectedVertices() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_SelectedCacheDirty(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_SelectedCacheDirty() const {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_SelectedSharedVerticesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xe4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_SelectedSharedVerticesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xe4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_SelectedCoincidentVertexCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_SelectedCoincidentVertexCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_SelectedSharedVertices(::System::Collections::Generic::HashSet_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<int32_t>, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::HashSet_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_SelectedSharedVertices() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<int32_t>, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::ProBuilderMesh::__set_m_SelectedCoincidentVertices(::System::Collections::Generic::List_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<int32_t>, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::List_1<int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::__get_m_SelectedCoincidentVertices() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::UnityEngine::ProBuilder::ProBuilderMesh::get_userCollisions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_userCollisions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_userCollisions(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_userCollisions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::ProBuilder::UnwrapParameters ::UnityEngine::ProBuilder::ProBuilderMesh::get_unwrapParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_unwrapParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::UnwrapParameters, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_unwrapParameters(::UnityEngine::ProBuilder::UnwrapParameters value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_unwrapParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::UnwrapParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::MeshRenderer ::UnityEngine::ProBuilder::ProBuilderMesh::get_renderer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_renderer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshRenderer, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::MeshFilter ::UnityEngine::ProBuilder::ProBuilderMesh::get_filter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_filter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshFilter, false>(const_cast<void*>(instance), ___internal_method);
}
 uint16_t ::UnityEngine::ProBuilder::ProBuilderMesh::get_versionIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_versionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::ProBuilder::ProBuilderMesh::get_preserveMeshAssetOnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_preserveMeshAssetOnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_preserveMeshAssetOnDestroy(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_preserveMeshAssetOnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::ProBuilder::ProBuilderMesh::HasArrays(::UnityEngine::ProBuilder::MeshArrays channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "HasArrays",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshArrays>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, channels);
}
 ::ArrayW<::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::ProBuilderMesh::get_facesInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_facesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_facesInternal(::ArrayW<::UnityEngine::ProBuilder::Face> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_facesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::ProBuilderMesh::get_faces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_faces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_faces(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_faces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::InvalidateSharedVertexLookup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "InvalidateSharedVertexLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::InvalidateSharedTextureLookup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "InvalidateSharedTextureLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::InvalidateFaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "InvalidateFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::InvalidateCaches()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "InvalidateCaches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::UnityEngine::ProBuilder::SharedVertex> ::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVerticesInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_sharedVerticesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::SharedVertex>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_sharedVerticesInternal(::ArrayW<::UnityEngine::ProBuilder::SharedVertex> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_sharedVerticesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::SharedVertex>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex> ::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVertices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_sharedVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_sharedVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_sharedVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVertexLookup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_sharedVertexLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::SetSharedVertices(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> indexes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetSharedVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indexes);
}
 ::ArrayW<::UnityEngine::ProBuilder::SharedVertex> ::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedTextures()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_sharedTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::SharedVertex>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_sharedTextures(::ArrayW<::UnityEngine::ProBuilder::SharedVertex> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_sharedTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::SharedVertex>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedTextureLookup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_sharedTextureLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::SetSharedTextures(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> indexes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetSharedTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indexes);
}
 ::ArrayW<::UnityEngine::Vector3> ::UnityEngine::ProBuilder::ProBuilderMesh::get_positionsInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_positionsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_positionsInternal(::ArrayW<::UnityEngine::Vector3> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_positionsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::IList_1<::UnityEngine::Vector3> ::UnityEngine::ProBuilder::ProBuilderMesh::get_positions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_positions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_positions(::System::Collections::Generic::IList_1<::UnityEngine::Vector3> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_positions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
/// @param indexes: ::System::Collections::Generic::IList_1<int32_t> (default: csnull)
 ::ArrayW<::UnityEngine::ProBuilder::Vertex> ::UnityEngine::ProBuilder::ProBuilderMesh::GetVertices(::System::Collections::Generic::IList_1<int32_t> indexes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Vertex>, false>(const_cast<void*>(instance), ___internal_method, indexes);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::GetVerticesInList(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex> vertices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetVerticesInList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertices);
}
/// @param applyMesh: bool (default: false)
 void ::UnityEngine::ProBuilder::ProBuilderMesh::SetVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex> vertices, bool applyMesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertices, applyMesh);
}
 ::System::Collections::Generic::IList_1<::UnityEngine::Vector3> ::UnityEngine::ProBuilder::ProBuilderMesh::get_normals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_normals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::UnityEngine::Vector3> ::UnityEngine::ProBuilder::ProBuilderMesh::get_normalsInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_normalsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_normalsInternal(::ArrayW<::UnityEngine::Vector3> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_normalsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<::UnityEngine::Vector3> ::UnityEngine::ProBuilder::ProBuilderMesh::GetNormals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::UnityEngine::Color> ::UnityEngine::ProBuilder::ProBuilderMesh::get_colorsInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_colorsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_colorsInternal(::ArrayW<::UnityEngine::Color> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_colorsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::IList_1<::UnityEngine::Color> ::UnityEngine::ProBuilder::ProBuilderMesh::get_colors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_colors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Color>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_colors(::System::Collections::Generic::IList_1<::UnityEngine::Color> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_colors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Color>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<::UnityEngine::Color> ::UnityEngine::ProBuilder::ProBuilderMesh::GetColors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IList_1<::UnityEngine::Vector4> ::UnityEngine::ProBuilder::ProBuilderMesh::get_tangents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_tangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_tangents(::System::Collections::Generic::IList_1<::UnityEngine::Vector4> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_tangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<::UnityEngine::Vector4> ::UnityEngine::ProBuilder::ProBuilderMesh::get_tangentsInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_tangentsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_tangentsInternal(::ArrayW<::UnityEngine::Vector4> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_tangentsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<::UnityEngine::Vector4> ::UnityEngine::ProBuilder::ProBuilderMesh::GetTangents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::UnityEngine::Vector2> ::UnityEngine::ProBuilder::ProBuilderMesh::get_texturesInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_texturesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_texturesInternal(::ArrayW<::UnityEngine::Vector2> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_texturesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4> ::UnityEngine::ProBuilder::ProBuilderMesh::get_textures2Internal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_textures2Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector4>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_textures2Internal(::System::Collections::Generic::List_1<::UnityEngine::Vector4> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_textures2Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4> ::UnityEngine::ProBuilder::ProBuilderMesh::get_textures3Internal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_textures3Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector4>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_textures3Internal(::System::Collections::Generic::List_1<::UnityEngine::Vector4> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_textures3Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::IList_1<::UnityEngine::Vector2> ::UnityEngine::ProBuilder::ProBuilderMesh::get_textures()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_textures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_textures(::System::Collections::Generic::IList_1<::UnityEngine::Vector2> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_textures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4> uvs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs);
}
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector2> ::UnityEngine::ProBuilder::ProBuilderMesh::GetUVs(int32_t channel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector2>, false>(const_cast<void*>(instance), ___internal_method, channel);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4> uvs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, channel, uvs);
}
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::get_faceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_faceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::get_vertexCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_vertexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::get_edgeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_edgeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::get_indexCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_indexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::get_triangleCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_triangleCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::add_meshWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "add_meshWillBeDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::remove_meshWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "remove_meshWillBeDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::add_meshWasInitialized(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "add_meshWasInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::remove_meshWasInitialized(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "remove_meshWasInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::add_componentWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "add_componentWillBeDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::remove_componentWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "remove_componentWillBeDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::add_componentHasBeenReset(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "add_componentHasBeenReset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::remove_componentHasBeenReset(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "remove_componentHasBeenReset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::add_elementSelectionChanged(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "add_elementSelectionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::remove_elementSelectionChanged(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "remove_elementSelectionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 ::UnityEngine::Mesh ::UnityEngine::ProBuilder::ProBuilderMesh::get_mesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_mesh(::UnityEngine::Mesh value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::ProBuilder::MeshSyncState ::UnityEngine::ProBuilder::ProBuilderMesh::get_meshSyncState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_meshSyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::MeshSyncState, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::get_meshFormatVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_meshFormatVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::IncrementVersionIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "IncrementVersionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::EnsureMeshFilterIsAssigned()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "EnsureMeshFilterIsAssigned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::ProBuilder::ProBuilderMesh ::UnityEngine::ProBuilder::ProBuilderMesh::CreateInstanceWithPoints(::ArrayW<::UnityEngine::Vector3> positions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "CreateInstanceWithPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ProBuilderMesh, false>(nullptr, ___internal_method, positions);
}
 ::UnityEngine::ProBuilder::ProBuilderMesh ::UnityEngine::ProBuilder::ProBuilderMesh::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ProBuilderMesh, false>(nullptr, ___internal_method);
}
 ::UnityEngine::ProBuilder::ProBuilderMesh ::UnityEngine::ProBuilder::ProBuilderMesh::Create(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3> positions, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face> faces)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ProBuilderMesh, false>(nullptr, ___internal_method, positions, faces);
}
/// @param sharedVertices: ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex> (default: csnull)
/// @param sharedTextures: ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex> (default: csnull)
/// @param materials: ::System::Collections::Generic::IList_1<::UnityEngine::Material> (default: csnull)
 ::UnityEngine::ProBuilder::ProBuilderMesh ::UnityEngine::ProBuilder::ProBuilderMesh::Create(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex> vertices, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face> faces, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex> sharedVertices, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex> sharedTextures, ::System::Collections::Generic::IList_1<::UnityEngine::Material> materials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Material>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ProBuilderMesh, false>(nullptr, ___internal_method, vertices, faces, sharedVertices, sharedTextures, materials);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::GeometryWithPoints(::ArrayW<::UnityEngine::Vector3> points)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GeometryWithPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, points);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::RebuildWithPositionsAndFaces(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3> vertices, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face> faces)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "RebuildWithPositionsAndFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertices, faces);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::Rebuild()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param preferredTopology: ::UnityEngine::MeshTopology (default: 0)
 void ::UnityEngine::ProBuilder::ProBuilderMesh::ToMesh(::UnityEngine::MeshTopology preferredTopology)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "ToMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, preferredTopology);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::MakeUnique()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "MakeUnique",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::CopyFrom(::UnityEngine::ProBuilder::ProBuilderMesh other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "CopyFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, other);
}
/// @param mask: ::UnityEngine::ProBuilder::RefreshMask (default: 31)
 void ::UnityEngine::ProBuilder::ProBuilderMesh::Refresh(::UnityEngine::ProBuilder::RefreshMask mask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::RefreshMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mask);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::EnsureMeshColliderIsAssigned()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "EnsureMeshColliderIsAssigned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param i: int32_t (default: 1)
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::GetUnusedTextureGroup(int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetUnusedTextureGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, i);
}
 bool ::UnityEngine::ProBuilder::ProBuilderMesh::IsValidTextureGroup(int32_t group)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "IsValidTextureGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, group);
}
/// @param i: int32_t (default: 1)
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::UnusedElementGroup(int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "UnusedElementGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, i);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::RefreshUV(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face> facesToRefresh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "RefreshUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, facesToRefresh);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::SetGroupUV(::UnityEngine::ProBuilder::AutoUnwrapSettings settings, int32_t group)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetGroupUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, settings, group);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::RefreshColors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "RefreshColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::SetFaceColor(::UnityEngine::ProBuilder::Face face, ::UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetFaceColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, face, color);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::SetMaterial(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face> faces, ::UnityEngine::Material material)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, faces, material);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::RefreshNormals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "RefreshNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::RefreshTangents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "RefreshTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::GetSharedVertexHandle(int32_t vertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetSharedVertexHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, vertex);
}
 ::System::Collections::Generic::HashSet_1<int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::GetSharedVertexHandles(::System::Collections::Generic::IEnumerable_1<int32_t> vertices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetSharedVertexHandles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, vertices);
}
 ::System::Collections::Generic::List_1<int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<int32_t> vertices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetCoincidentVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, vertices);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face> faces, ::System::Collections::Generic::List_1<int32_t> coincident)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetCoincidentVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, faces, coincident);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> edges, ::System::Collections::Generic::List_1<int32_t> coincident)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetCoincidentVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, edges, coincident);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<int32_t> vertices, ::System::Collections::Generic::List_1<int32_t> coincident)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetCoincidentVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertices, coincident);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices(int32_t vertex, ::System::Collections::Generic::List_1<int32_t> coincident)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetCoincidentVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertex, coincident);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::SetVerticesCoincident(::System::Collections::Generic::IEnumerable_1<int32_t> vertices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetVerticesCoincident",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertices);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::SetTexturesCoincident(::System::Collections::Generic::IEnumerable_1<int32_t> vertices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetTexturesCoincident",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertices);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::AddToSharedVertex(int32_t sharedVertexHandle, int32_t vertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "AddToSharedVertex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sharedVertexHandle, vertex);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::AddSharedVertex(::UnityEngine::ProBuilder::SharedVertex vertex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "AddSharedVertex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::SharedVertex>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertex);
}
 bool ::UnityEngine::ProBuilder::ProBuilderMesh::get_selectable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_selectable(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_selectable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedFaceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedVertexCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedVertexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdgeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedEdgeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedSharedVerticesCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedSharedVerticesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedCoincidentVertexCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedCoincidentVertexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerable_1<int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedSharedVertices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedSharedVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerable_1<int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedCoincidentVertices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedCoincidentVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::CacheSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "CacheSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::ProBuilderMesh::GetSelectedFaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetSelectedFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceIndexes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedFaceIndexes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedVertices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge> ::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdges()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedEdges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFacesInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedFacesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_selectedFacesInternal(::ArrayW<::UnityEngine::ProBuilder::Face> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_selectedFacesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceIndicesInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedFaceIndicesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_selectedFaceIndicesInternal(::ArrayW<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_selectedFaceIndicesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<::UnityEngine::ProBuilder::Edge> ::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdgesInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedEdgesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Edge>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_selectedEdgesInternal(::ArrayW<::UnityEngine::ProBuilder::Edge> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_selectedEdgesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Edge>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedIndexesInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "get_selectedIndexesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::set_selectedIndexesInternal(::ArrayW<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "set_selectedIndexesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::ProBuilder::Face ::UnityEngine::ProBuilder::ProBuilderMesh::GetActiveFace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetActiveFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::ProBuilder::Edge ::UnityEngine::ProBuilder::ProBuilderMesh::GetActiveEdge()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetActiveEdge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::GetActiveVertex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "GetActiveVertex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::AddToFaceSelection(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "AddToFaceSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedFaces(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face> selected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetSelectedFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selected);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedFaces(::System::Collections::Generic::IEnumerable_1<int32_t> selected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetSelectedFaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selected);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> edges)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetSelectedEdges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, edges);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedVertices(::System::Collections::Generic::IEnumerable_1<int32_t> vertices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "SetSelectedVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertices);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::RemoveFromFaceSelectionAtIndex(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "RemoveFromFaceSelectionAtIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::ClearSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "ClearSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::ProBuilder::ProBuilderMesh::ProBuilderMesh()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ProBuilderMesh>())) {}
 void ::UnityEngine::ProBuilder::ProBuilderMesh::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::_set_selectedFacesInternal_b__225_0(::UnityEngine::ProBuilder::Face x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "<set_selectedFacesInternal>b__225_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
 int32_t ::UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__239_0(::UnityEngine::ProBuilder::Face x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "<SetSelectedFaces>b__239_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::System::Collections::Generic::IEnumerable_1<int32_t> ::UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__240_0(int32_t x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "<SetSelectedFaces>b__240_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> ::UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__240_1(int32_t x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh>::get(),
                            "<SetSelectedFaces>b__240_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>, false>(const_cast<void*>(instance), ___internal_method, x);
}
} // end anonymous namespace
