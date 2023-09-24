#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithDataStoreUnderPublicUserDataStore_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257e5e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore.GetDataStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::StringW,::StringW> (Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::*)()>(&Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::GetDataStore)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2581160;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::StringW,::StringW> (Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x258119c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
 Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::New_ctor(::cordl_internals::intptr_t c_message)  {
Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore>(c_message))};
return o;
}
 void Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::GetDataStore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore>::get(),
                            "GetDataStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
