#pragma once
namespace {
#include "System/Runtime/Serialization/zzzz__SafeSerializationManager_def.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__SafeSerializationEventArgs_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)()>(&::System::Runtime::Serialization::SafeSerializationManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2350c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SafeSerializationManager::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2350c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.get_IsActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::SafeSerializationManager::*)()>(&::System::Runtime::Serialization::SafeSerializationManager::get_IsActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2351120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager>::get(),
                            "get_IsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.CompleteSerialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)(::bs_hook::Il2CppWrapperType, ::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SafeSerializationManager::CompleteSerialization)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2351130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager>::get(),
                            "CompleteSerialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.CompleteDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)(::bs_hook::Il2CppWrapperType)>(&::System::Runtime::Serialization::SafeSerializationManager::CompleteDeserialization)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x2351460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager>::get(),
                            "CompleteDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SafeSerializationManager::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2351800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.System_Runtime_Serialization_IObjectReference_GetRealObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Runtime::Serialization::SafeSerializationManager::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SafeSerializationManager::System_Runtime_Serialization_IObjectReference_GetRealObject)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x23518b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager>::get(),
                            "System.Runtime.Serialization.IObjectReference.GetRealObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.OnDeserialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SafeSerializationManager::OnDeserialized)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2351b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::Serialization::IObjectReference
constexpr  ::System::Runtime::Serialization::SafeSerializationManager::operator ::System::Runtime::Serialization::IObjectReference() const noexcept {
return ::System::Runtime::Serialization::IObjectReference(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr  ::System::Runtime::Serialization::SafeSerializationManager::operator ::System::Runtime::Serialization::ISerializable() const noexcept {
return ::System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::SafeSerializationManager::__set_m_serializedStates(::System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> ::System::Runtime::Serialization::SafeSerializationManager::__get_m_serializedStates() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::SafeSerializationManager::__set_m_savedSerializationInfo(::System::Runtime::Serialization::SerializationInfo value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::SerializationInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::SerializationInfo>(value));
}
constexpr ::System::Runtime::Serialization::SerializationInfo ::System::Runtime::Serialization::SafeSerializationManager::__get_m_savedSerializationInfo() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::SerializationInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::SafeSerializationManager::__set_m_realObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Runtime::Serialization::SafeSerializationManager::__get_m_realObject() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::SafeSerializationManager::__set_m_realType(::System::RuntimeType value)  {
::cordl_internals::setInstanceField<::System::RuntimeType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::RuntimeType>(value));
}
constexpr ::System::RuntimeType ::System::Runtime::Serialization::SafeSerializationManager::__get_m_realType() const {
return ::cordl_internals::getInstanceField<::System::RuntimeType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::SafeSerializationManager::__set_SerializeObjectState(::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs> value)  {
::cordl_internals::setInstanceField<::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs>>(value));
}
constexpr ::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs> ::System::Runtime::Serialization::SafeSerializationManager::__get_SerializeObjectState() const {
return ::cordl_internals::getInstanceField<::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Runtime::Serialization::SafeSerializationManager::SafeSerializationManager()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SafeSerializationManager>())) {}
 void ::System::Runtime::Serialization::SafeSerializationManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 ::System::Runtime::Serialization::SafeSerializationManager::SafeSerializationManager(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SafeSerializationManager>(info, context))) {}
 void ::System::Runtime::Serialization::SafeSerializationManager::_ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 bool ::System::Runtime::Serialization::SafeSerializationManager::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager>::get(),
                            "get_IsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Serialization::SafeSerializationManager::CompleteSerialization(::bs_hook::Il2CppWrapperType serializedObject, ::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager>::get(),
                            "CompleteSerialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializedObject, info, context);
}
 void ::System::Runtime::Serialization::SafeSerializationManager::CompleteDeserialization(::bs_hook::Il2CppWrapperType deserializedObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager>::get(),
                            "CompleteDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deserializedObject);
}
 void ::System::Runtime::Serialization::SafeSerializationManager::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 ::bs_hook::Il2CppWrapperType ::System::Runtime::Serialization::SafeSerializationManager::System_Runtime_Serialization_IObjectReference_GetRealObject(::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager>::get(),
                            "System.Runtime.Serialization.IObjectReference.GetRealObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void ::System::Runtime::Serialization::SafeSerializationManager::OnDeserialized(::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
} // end anonymous namespace
