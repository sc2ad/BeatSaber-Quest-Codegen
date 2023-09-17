#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_ThreadedTask_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_ThreadedTaskLoadGeo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferInstancer_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferMesh_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferVolume_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GenerateOptions_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_BaseSync_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartInfo_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType::FILE{0};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType::NODE{1};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType::ASSET{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus  ::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus::NONE{0};
constexpr ::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus  ::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus::STARTED{1};
constexpr ::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus  ::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus::SUCCESS{2};
constexpr ::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus  ::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus::ERROR{3};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData::*)()>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x204059c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__set__cookNodeID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__get__cookNodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__set__loadStatus(::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus>(value));
}
constexpr ::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__get__loadStatus() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__set__logStr(::System::Text::StringBuilder value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Text::StringBuilder>(value));
}
constexpr ::System::Text::StringBuilder ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__get__logStr() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__set__session(::HoudiniEngineUnity::HEU_SessionBase value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_SessionBase, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_SessionBase>(value));
}
constexpr ::HoudiniEngineUnity::HEU_SessionBase ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__get__session() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_SessionBase, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__set__loadedObjects(::System::Collections::Generic::List_1<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject> ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__get__loadedObjects() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__set__idBuffersMap(::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase> ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__get__idBuffersMap() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData>())) {}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::*)()>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20405a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__set__objectNodeID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__get__objectNodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__set__displayNodeID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__get__displayNodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__set__terrainBuffers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume> ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__get__terrainBuffers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__set__meshBuffers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh> ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__get__meshBuffers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__set__instancerBuffers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer> ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__get__instancerBuffers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject>())) {}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType::PRECOOK{0};
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType  ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType::POSTCOOK{1};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x20405ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::*)(::HoudiniEngineUnity::HEU_SessionBase, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20406dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::*)(::HoudiniEngineUnity::HEU_SessionBase, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x20406f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::*)(::System::IAsyncResult)>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2040788;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback>(object, method))) {}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::Invoke(::HoudiniEngineUnity::HEU_SessionBase session, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData loadData, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType callbackType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, loadData, callbackType);
}
 ::System::IAsyncResult ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::BeginInvoke(::HoudiniEngineUnity::HEU_SessionBase session, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData loadData, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType callbackType, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, session, loadData, callbackType, callback, object);
}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.SetupLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase, ::HoudiniEngineUnity::HEU_BaseSync, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType, int32_t, ::StringW, ::StringW)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetupLoad)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x203ad0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "SetupLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_BaseSync>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.SetupLoadNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase, ::HoudiniEngineUnity::HEU_BaseSync, int32_t, ::StringW)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetupLoadNode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2038930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "SetupLoadNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_BaseSync>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.SetupLoadFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase, ::HoudiniEngineUnity::HEU_BaseSync, int32_t, ::StringW)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetupLoadFile)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x203877c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "SetupLoadFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_BaseSync>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.SetupLoadAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase, ::HoudiniEngineUnity::HEU_BaseSync, ::StringW, ::StringW)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetupLoadAsset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2033d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "SetupLoadAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_BaseSync>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.SetLoadCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetLoadCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x203adf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "SetLoadCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.DoWork
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::DoWork)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x203adfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.CookNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::CookNode)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x203b24c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.LoadObjectBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase, ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadObjectBuffers)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x203b3e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.LoadNodeBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadNodeBuffer)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x203b5b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.BuildBufferIDsMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::BuildBufferIDsMap)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x203dab8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.DoFileLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::DoFileLoad)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x203df80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.DoAssetLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::DoAssetLoad)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x203e320;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.QueryParts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(int32_t, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::QueryParts)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x203b854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "QueryParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.OnComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::OnComplete)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x203e64c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.OnStopped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::OnStopped)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x203e6dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.CleanUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::CleanUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x203e760;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.CreateLogString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus, ::StringW)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::CreateLogString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x203e768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "CreateLogString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.AppendLog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus, ::StringW)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::AppendLog)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x203b134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "AppendLog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.SetLog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus, ::StringW)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetLog)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x203e80c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "SetLog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.CreateFileNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::CreateFileNode)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x203e18c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "CreateFileNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.GetCookNodeID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GetCookNodeID)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x203e95c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.GetDisplayNodeID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(int32_t)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GetDisplayNodeID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x203e218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "GetDisplayNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.SetFileParm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(int32_t, ::StringW)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetFileParm)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x203e268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "SetFileParm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.Sleep
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::Sleep)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x203b3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "Sleep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.GenerateTerrainBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume>>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GenerateTerrainBuffers)> {
  constexpr static std::size_t size = 0x14a0;
  constexpr static std::size_t addrs = 0x203c1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "GenerateTerrainBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.LoadStringFromAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, ByRef<::StringW>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadStringFromAttribute)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x203e978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "LoadStringFromAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.LoadFloatFromAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, ByRef<float_t>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadFloatFromAttribute)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x203e9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "LoadFloatFromAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.LoadLayerColorFromAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, ByRef<::UnityEngine::Color>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadLayerColorFromAttribute)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x203eb24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "LoadLayerColorFromAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.LoadLayerVector2FromAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, ByRef<::UnityEngine::Vector2>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadLayerVector2FromAttribute)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x203ec84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "LoadLayerVector2FromAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.GenerateMeshBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>, bool, bool, bool, bool, bool, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh>>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GenerateMeshBuffers)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x203bcd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "GenerateMeshBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.GenerateInstancerBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer>>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GenerateInstancerBuffers)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x203d68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "GenerateInstancerBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.GeneratePartsInstancerBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_LoadBufferInstancer (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, ::HoudiniEngineUnity::HAPI_PartInfo)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GeneratePartsInstancerBuffer)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x203ef20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "GeneratePartsInstancerBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PartInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.GeneratePointAttributeInstancerBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_LoadBufferInstancer (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW, ::HoudiniEngineUnity::HAPI_PartInfo)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GeneratePointAttributeInstancerBuffer)> {
  constexpr static std::size_t size = 0x13bc;
  constexpr static std::size_t addrs = 0x203f1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "GeneratePointAttributeInstancerBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PartInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.GetLoadBufferVolumeFromTileIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_LoadBufferVolume (*)(int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GetLoadBufferVolumeFromTileIndex)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x203edbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "GetLoadBufferVolumeFromTileIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2033cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__set__ownerSync(::HoudiniEngineUnity::HEU_BaseSync value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_BaseSync, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_BaseSync>(value));
}
constexpr ::HoudiniEngineUnity::HEU_BaseSync ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__get__ownerSync() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_BaseSync, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__set__session(::HoudiniEngineUnity::HEU_SessionBase value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_SessionBase, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_SessionBase>(value));
}
constexpr ::HoudiniEngineUnity::HEU_SessionBase ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__get__session() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_SessionBase, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__set__generateOptions(::HoudiniEngineUnity::HEU_GenerateOptions value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_GenerateOptions, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_GenerateOptions>(value));
}
constexpr ::HoudiniEngineUnity::HEU_GenerateOptions ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__get__generateOptions() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_GenerateOptions, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__set__loadType(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType>(value));
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__get__loadType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__set__filePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__get__filePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__set__loadData(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData>(value));
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__get__loadData() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__set__loadCallback(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback>(value));
}
constexpr ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__get__loadCallback() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetupLoad(::HoudiniEngineUnity::HEU_SessionBase session, ::HoudiniEngineUnity::HEU_BaseSync ownerSync, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType loadType, int32_t cookNodeID, ::StringW name, ::StringW filePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "SetupLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_BaseSync>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__LoadType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, ownerSync, loadType, cookNodeID, name, filePath);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetupLoadNode(::HoudiniEngineUnity::HEU_SessionBase session, ::HoudiniEngineUnity::HEU_BaseSync ownerSync, int32_t cookNodeID, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "SetupLoadNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_BaseSync>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, ownerSync, cookNodeID, name);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetupLoadFile(::HoudiniEngineUnity::HEU_SessionBase session, ::HoudiniEngineUnity::HEU_BaseSync ownerSync, int32_t cookNodeID, ::StringW filePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "SetupLoadFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_BaseSync>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, ownerSync, cookNodeID, filePath);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetupLoadAsset(::HoudiniEngineUnity::HEU_SessionBase session, ::HoudiniEngineUnity::HEU_BaseSync ownerSync, ::StringW assetPath, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "SetupLoadAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_BaseSync>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, ownerSync, assetPath, name);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetLoadCallback(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback loadCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "SetLoadCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, loadCallback);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::DoWork()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "DoWork",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::CookNode(::HoudiniEngineUnity::HEU_SessionBase session, int32_t cookNodeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "CookNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, cookNodeID);
}
 bool ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadObjectBuffers(::HoudiniEngineUnity::HEU_SessionBase session, ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo> objectInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "LoadObjectBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, objectInfo);
}
 bool ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadNodeBuffer(::HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject loadObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "LoadNodeBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, nodeID, loadObject);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::BuildBufferIDsMap(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData loadData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "BuildBufferIDsMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, loadData);
}
 bool ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::DoFileLoad()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "DoFileLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::DoAssetLoad()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "DoAssetLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::QueryParts(int32_t nodeID, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>> meshParts, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>> volumeParts, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>> instancerParts, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>> curveParts, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>> scatterInstancerParts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "QueryParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, nodeID, meshParts, volumeParts, instancerParts, curveParts, scatterInstancerParts);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::OnComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "OnComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::OnStopped()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "OnStopped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::CleanUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "CleanUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::CreateLogString(::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus status, ::StringW logStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "CreateLogString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, status, logStr);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::AppendLog(::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus status, ::StringW logStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "AppendLog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, status, logStr);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetLog(::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus status, ::StringW logStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "SetLog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______HoudiniEngineUnity__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, status, logStr);
}
 bool ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::CreateFileNode(ByRef<int32_t> fileNodeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "CreateFileNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, fileNodeID);
}
 int32_t ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GetCookNodeID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "GetCookNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GetDisplayNodeID(int32_t objNodeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "GetDisplayNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, objNodeID);
}
 bool ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetFileParm(int32_t fileNodeID, ::StringW filePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "SetFileParm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, fileNodeID, filePath);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::Sleep()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "Sleep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GenerateTerrainBuffers(::HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo> volumeParts, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo> scatterInstancerParts, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume>> volumeBuffers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "GenerateTerrainBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, nodeID, volumeParts, scatterInstancerParts, volumeBuffers);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadStringFromAttribute(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<::StringW> strValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "LoadStringFromAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, geoID, partID, attrName, strValue);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadFloatFromAttribute(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<float_t> floatValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "LoadFloatFromAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, geoID, partID, attrName, floatValue);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadLayerColorFromAttribute(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<::UnityEngine::Color> colorValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "LoadLayerColorFromAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, geoID, partID, attrName, colorValue);
}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadLayerVector2FromAttribute(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<::UnityEngine::Vector2> vectorValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "LoadLayerVector2FromAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, geoID, partID, attrName, vectorValue);
}
 bool ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GenerateMeshBuffers(::HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo> meshParts, bool bSplitPoints, bool bUseLODGroups, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh>> meshBuffers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "GenerateMeshBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, nodeID, meshParts, bSplitPoints, bUseLODGroups, bGenerateUVs, bGenerateTangents, bGenerateNormals, meshBuffers);
}
 bool ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GenerateInstancerBuffers(::HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo> instancerParts, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer>> instancerBuffers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "GenerateInstancerBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, nodeID, instancerParts, instancerBuffers);
}
 ::HoudiniEngineUnity::HEU_LoadBufferInstancer ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GeneratePartsInstancerBuffer(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW partName, ::HoudiniEngineUnity::HAPI_PartInfo partInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "GeneratePartsInstancerBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PartInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_LoadBufferInstancer, false>(const_cast<void*>(instance), ___internal_method, session, geoID, partID, partName, partInfo);
}
 ::HoudiniEngineUnity::HEU_LoadBufferInstancer ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GeneratePointAttributeInstancerBuffer(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW partName, ::HoudiniEngineUnity::HAPI_PartInfo partInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "GeneratePointAttributeInstancerBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PartInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_LoadBufferInstancer, false>(const_cast<void*>(instance), ___internal_method, session, geoID, partID, partName, partInfo);
}
 ::HoudiniEngineUnity::HEU_LoadBufferVolume ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GetLoadBufferVolumeFromTileIndex(int32_t tileIndex, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume> buffers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            "GetLoadBufferVolumeFromTileIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_LoadBufferVolume, false>(nullptr, ___internal_method, tileIndex, buffers);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::HEU_ThreadedTaskLoadGeo()  : ::HoudiniEngineUnity::HEU_ThreadedTask(THROW_UNLESS(::il2cpp_utils::New<HEU_ThreadedTaskLoadGeo>())) {}
 void ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
