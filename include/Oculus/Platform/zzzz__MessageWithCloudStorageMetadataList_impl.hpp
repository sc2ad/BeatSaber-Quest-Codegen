#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithCloudStorageMetadataList_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadataList_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithCloudStorageMetadataList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithCloudStorageMetadataList::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithCloudStorageMetadataList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257e4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageMetadataList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithCloudStorageMetadataList.GetCloudStorageMetadataList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CloudStorageMetadataList (Oculus::Platform::MessageWithCloudStorageMetadataList::*)()>(&Oculus::Platform::MessageWithCloudStorageMetadataList::GetCloudStorageMetadataList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2580f18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithCloudStorageMetadataList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageMetadataList>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithCloudStorageMetadataList.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CloudStorageMetadataList (Oculus::Platform::MessageWithCloudStorageMetadataList::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithCloudStorageMetadataList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2580f54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithCloudStorageMetadataList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageMetadataList>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
 Oculus::Platform::MessageWithCloudStorageMetadataList Oculus::Platform::MessageWithCloudStorageMetadataList::New_ctor(::cordl_internals::intptr_t c_message)  {
Oculus::Platform::MessageWithCloudStorageMetadataList o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::MessageWithCloudStorageMetadataList>(c_message))};
return o;
}
 void Oculus::Platform::MessageWithCloudStorageMetadataList::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageMetadataList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::CloudStorageMetadataList Oculus::Platform::MessageWithCloudStorageMetadataList::GetCloudStorageMetadataList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageMetadataList>::get(),
                            "GetCloudStorageMetadataList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::CloudStorageMetadataList, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::CloudStorageMetadataList Oculus::Platform::MessageWithCloudStorageMetadataList::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithCloudStorageMetadataList>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::CloudStorageMetadataList, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
