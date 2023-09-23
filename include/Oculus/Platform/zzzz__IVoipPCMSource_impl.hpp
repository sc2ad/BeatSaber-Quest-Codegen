#pragma once
#include "Oculus/Platform/zzzz__IVoipPCMSource_def.hpp"
//  Writing Method size for method: Oculus::Platform::IVoipPCMSource.GetPCM
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Oculus::Platform::IVoipPCMSource::*)(::ArrayW<float_t>, int32_t)>(&Oculus::Platform::IVoipPCMSource::GetPCM)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::IVoipPCMSource),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IVoipPCMSource>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::IVoipPCMSource.SetSenderID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::IVoipPCMSource::*)(uint64_t)>(&Oculus::Platform::IVoipPCMSource::SetSenderID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::IVoipPCMSource),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IVoipPCMSource>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::IVoipPCMSource.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::IVoipPCMSource::*)()>(&Oculus::Platform::IVoipPCMSource::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::IVoipPCMSource),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IVoipPCMSource>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::IVoipPCMSource.PeekSizeElements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Oculus::Platform::IVoipPCMSource::*)()>(&Oculus::Platform::IVoipPCMSource::PeekSizeElements)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::IVoipPCMSource),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IVoipPCMSource>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
 int32_t Oculus::Platform::IVoipPCMSource::GetPCM(::ArrayW<float_t> dest, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IVoipPCMSource>::get(),
                            "GetPCM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, dest, length);
}
 void Oculus::Platform::IVoipPCMSource::SetSenderID(uint64_t senderID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IVoipPCMSource>::get(),
                            "SetSenderID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, senderID);
}
 void Oculus::Platform::IVoipPCMSource::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IVoipPCMSource>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Oculus::Platform::IVoipPCMSource::PeekSizeElements()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IVoipPCMSource>::get(),
                            "PeekSizeElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
