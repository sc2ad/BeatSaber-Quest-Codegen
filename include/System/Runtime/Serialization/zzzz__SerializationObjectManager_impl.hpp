#pragma once
#include "System/Runtime/Serialization/zzzz__SerializationObjectManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEventHandler_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::SerializationObjectManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationObjectManager::*)(System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::SerializationObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2349714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationObjectManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::SerializationObjectManager.RegisterObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationObjectManager::*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::SerializationObjectManager::RegisterObject)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x23497a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationObjectManager>::get(),
                            "RegisterObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::SerializationObjectManager.RaiseOnSerializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationObjectManager::*)()>(&System::Runtime::Serialization::SerializationObjectManager::RaiseOnSerializedEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2349948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationObjectManager>::get(),
                            "RaiseOnSerializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::SerializationObjectManager.AddOnSerialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationObjectManager::*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::SerializationObjectManager::AddOnSerialized)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23498b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationObjectManager>::get(),
                            "AddOnSerialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::SerializationObjectManager::__set__objectSeenTable(System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> System::Runtime::Serialization::SerializationObjectManager::__get__objectSeenTable() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::SerializationObjectManager::__set__context(System::Runtime::Serialization::StreamingContext value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::StreamingContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::StreamingContext>(value));
}
constexpr System::Runtime::Serialization::StreamingContext System::Runtime::Serialization::SerializationObjectManager::__get__context() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::StreamingContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::SerializationObjectManager::__set__onSerializedHandler(System::Runtime::Serialization::SerializationEventHandler value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::SerializationEventHandler, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::SerializationEventHandler>(value));
}
constexpr System::Runtime::Serialization::SerializationEventHandler System::Runtime::Serialization::SerializationObjectManager::__get__onSerializedHandler() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::SerializationEventHandler, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 System::Runtime::Serialization::SerializationObjectManager::SerializationObjectManager(System::Runtime::Serialization::StreamingContext context)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SerializationObjectManager>(context))) {}
 void System::Runtime::Serialization::SerializationObjectManager::_ctor(System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationObjectManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void System::Runtime::Serialization::SerializationObjectManager::RegisterObject(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationObjectManager>::get(),
                            "RegisterObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void System::Runtime::Serialization::SerializationObjectManager::RaiseOnSerializedEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationObjectManager>::get(),
                            "RaiseOnSerializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::SerializationObjectManager::AddOnSerialized(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SerializationObjectManager>::get(),
                            "AddOnSerialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
