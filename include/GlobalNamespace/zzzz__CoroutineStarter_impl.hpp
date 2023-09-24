#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CoroutineStarter_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: GlobalNamespace::CoroutineStarter.ICoroutineStarter_StartCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Coroutine (GlobalNamespace::CoroutineStarter::*)(System::Collections::IEnumerator)>(&GlobalNamespace::CoroutineStarter::ICoroutineStarter_StartCoroutine)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1f765b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoroutineStarter>::get(),
                            "ICoroutineStarter.StartCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEnumerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CoroutineStarter.ICoroutineStarter_StopCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CoroutineStarter::*)(UnityEngine::Coroutine)>(&GlobalNamespace::CoroutineStarter::ICoroutineStarter_StopCoroutine)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1f76684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoroutineStarter>::get(),
                            "ICoroutineStarter.StopCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Coroutine>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CoroutineStarter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CoroutineStarter::*)()>(&GlobalNamespace::CoroutineStarter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f76750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoroutineStarter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::ICoroutineStarter
constexpr  GlobalNamespace::CoroutineStarter::operator GlobalNamespace::ICoroutineStarter() const noexcept {
return GlobalNamespace::ICoroutineStarter(::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Coroutine GlobalNamespace::CoroutineStarter::ICoroutineStarter_StartCoroutine(System::Collections::IEnumerator routine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoroutineStarter>::get(),
                            "ICoroutineStarter.StartCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEnumerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Coroutine, false>(const_cast<void*>(instance), ___internal_method, routine);
}
 void GlobalNamespace::CoroutineStarter::ICoroutineStarter_StopCoroutine(UnityEngine::Coroutine routine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoroutineStarter>::get(),
                            "ICoroutineStarter.StopCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Coroutine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, routine);
}
 GlobalNamespace::CoroutineStarter GlobalNamespace::CoroutineStarter::New_ctor()  {
GlobalNamespace::CoroutineStarter o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::CoroutineStarter>())};
return o;
}
 void GlobalNamespace::CoroutineStarter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoroutineStarter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
