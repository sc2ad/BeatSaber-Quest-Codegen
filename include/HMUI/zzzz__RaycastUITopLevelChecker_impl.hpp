#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__RaycastUITopLevelChecker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
//  Writing Method size for method: HMUI::RaycastUITopLevelChecker.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::RaycastUITopLevelChecker::*)()>(&HMUI::RaycastUITopLevelChecker::Awake)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1fabb64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::RaycastUITopLevelChecker>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::RaycastUITopLevelChecker.get_isOnTop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::RaycastUITopLevelChecker::*)()>(&HMUI::RaycastUITopLevelChecker::get_isOnTop)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x1fabbd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::RaycastUITopLevelChecker>::get(),
                            "get_isOnTop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::RaycastUITopLevelChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::RaycastUITopLevelChecker::*)()>(&HMUI::RaycastUITopLevelChecker::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1fabde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::RaycastUITopLevelChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::RaycastUITopLevelChecker::__set_results(System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> HMUI::RaycastUITopLevelChecker::__get_results() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::RaycastUITopLevelChecker::__set__canvas(UnityEngine::Canvas value)  {
::cordl_internals::setInstanceField<UnityEngine::Canvas, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Canvas>(value));
}
constexpr UnityEngine::Canvas HMUI::RaycastUITopLevelChecker::__get__canvas() const {
return ::cordl_internals::getInstanceField<UnityEngine::Canvas, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HMUI::RaycastUITopLevelChecker::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::RaycastUITopLevelChecker>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HMUI::RaycastUITopLevelChecker::get_isOnTop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::RaycastUITopLevelChecker>::get(),
                            "get_isOnTop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 HMUI::RaycastUITopLevelChecker::RaycastUITopLevelChecker()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<RaycastUITopLevelChecker>())) {}
 void HMUI::RaycastUITopLevelChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::RaycastUITopLevelChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
