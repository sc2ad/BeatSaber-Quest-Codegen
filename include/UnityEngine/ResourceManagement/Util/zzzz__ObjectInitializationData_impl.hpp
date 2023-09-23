#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedType_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::ObjectInitializationData.get_Id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)()>(&UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3ae64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::ObjectInitializationData.get_ObjectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::Util::SerializedType (UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)()>(&UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_ObjectType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a3ae6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get(),
                            "get_ObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::ObjectInitializationData.get_Data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)()>(&UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3ae7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get(),
                            "get_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::ObjectInitializationData.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)()>(&UnityEngine::ResourceManagement::Util::ObjectInitializationData::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a3ae84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::Util::ObjectInitializationData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::ObjectInitializationData.GetAsyncInitHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)(UnityEngine::ResourceManagement::ResourceManager, ::StringW)>(&UnityEngine::ResourceManagement::Util::ObjectInitializationData::GetAsyncInitHandle)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2a3af1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get(),
                            "GetAsyncInitHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Id", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_ObjectType", ty: "UnityEngine::ResourceManagement::Util::SerializedType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Data", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::ResourceManagement::Util::ObjectInitializationData::ObjectInitializationData(::StringW m_Id, UnityEngine::ResourceManagement::Util::SerializedType m_ObjectType, ::StringW m_Data) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Id = m_Id;
this->m_ObjectType = m_ObjectType;
this->m_Data = m_Data;
}
constexpr void UnityEngine::ResourceManagement::Util::ObjectInitializationData::__set_m_Id(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::ResourceManagement::Util::ObjectInitializationData::__get_m_Id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void UnityEngine::ResourceManagement::Util::ObjectInitializationData::__set_m_ObjectType(UnityEngine::ResourceManagement::Util::SerializedType value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::Util::SerializedType, 0x8>(this->__instance, std::forward<UnityEngine::ResourceManagement::Util::SerializedType>(value));
}
constexpr UnityEngine::ResourceManagement::Util::SerializedType UnityEngine::ResourceManagement::Util::ObjectInitializationData::__get_m_ObjectType() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::Util::SerializedType, 0x8>(this->__instance);
}
constexpr void UnityEngine::ResourceManagement::Util::ObjectInitializationData::__set_m_Data(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::ResourceManagement::Util::ObjectInitializationData::__get_m_Data() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
 ::StringW UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::ResourceManagement::Util::SerializedType UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_ObjectType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get(),
                            "get_ObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::Util::SerializedType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get(),
                            "get_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::Util::ObjectInitializationData::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @param idOverride: ::StringW (default: csnull)
template<typename TObject>
 TObject UnityEngine::ResourceManagement::Util::ObjectInitializationData::CreateInstance(::StringW idOverride)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get(),
                        "CreateInstance",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TObject, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, idOverride);
}
/// @param idOverride: ::StringW (default: csnull)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::Util::ObjectInitializationData::GetAsyncInitHandle(UnityEngine::ResourceManagement::ResourceManager rm, ::StringW idOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get(),
                            "GetAsyncInitHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, rm, idOverride);
}
