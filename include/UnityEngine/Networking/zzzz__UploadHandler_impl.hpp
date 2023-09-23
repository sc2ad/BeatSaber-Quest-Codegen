#pragma once
#include "UnityEngine/Networking/zzzz__UploadHandler_def.hpp"
//  Writing Method size for method: UnityEngine::Networking::UploadHandler.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UploadHandler::*)()>(&UnityEngine::Networking::UploadHandler::Release)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d376f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UploadHandler>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UploadHandler.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UploadHandler::*)()>(&UnityEngine::Networking::UploadHandler::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d3772c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Networking::UploadHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UploadHandler>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Networking::UploadHandler::__set_m_Ptr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityEngine::Networking::UploadHandler::__get_m_Ptr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::Networking::UploadHandler::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UploadHandler>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::UploadHandler::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UploadHandler>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
