#pragma once
namespace {
#include "UnityEngine/Events/zzzz__PersistentCallGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__PersistentCall_def.hpp"
#include "UnityEngine/Events/zzzz__InvokableCallList_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::Events::PersistentCallGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::PersistentCallGroup::*)()>(&::UnityEngine::Events::PersistentCallGroup::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b8020c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::PersistentCallGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::PersistentCallGroup.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Events::PersistentCallGroup::*)()>(&::UnityEngine::Events::PersistentCallGroup::get_Count)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b8028c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::PersistentCallGroup>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::PersistentCallGroup.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::PersistentCallGroup::*)(::UnityEngine::Events::InvokableCallList, ::UnityEngine::Events::UnityEventBase)>(&::UnityEngine::Events::PersistentCallGroup::Initialize)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2b802d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::PersistentCallGroup>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::InvokableCallList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEventBase>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::Events::PersistentCallGroup::__set_m_Calls(::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall> ::UnityEngine::Events::PersistentCallGroup::__get_m_Calls() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::Events::PersistentCallGroup::PersistentCallGroup()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PersistentCallGroup>())) {}
 void ::UnityEngine::Events::PersistentCallGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::PersistentCallGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::Events::PersistentCallGroup::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::PersistentCallGroup>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Events::PersistentCallGroup::Initialize(::UnityEngine::Events::InvokableCallList invokableList, ::UnityEngine::Events::UnityEventBase unityEventBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::PersistentCallGroup>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::InvokableCallList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, invokableList, unityEventBase);
}
} // end anonymous namespace
