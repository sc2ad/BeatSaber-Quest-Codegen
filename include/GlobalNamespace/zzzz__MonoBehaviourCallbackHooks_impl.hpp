#pragma once
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_impl.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourCallbackHooks_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::MonoBehaviourCallbackHooks.add_OnUpdateDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonoBehaviourCallbackHooks::*)(System::Action_1<float_t>)>(&GlobalNamespace::MonoBehaviourCallbackHooks::add_OnUpdateDelegate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a31fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MonoBehaviourCallbackHooks>::get(),
                            "add_OnUpdateDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MonoBehaviourCallbackHooks.remove_OnUpdateDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonoBehaviourCallbackHooks::*)(System::Action_1<float_t>)>(&GlobalNamespace::MonoBehaviourCallbackHooks::remove_OnUpdateDelegate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a32078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MonoBehaviourCallbackHooks>::get(),
                            "remove_OnUpdateDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MonoBehaviourCallbackHooks.GetGameObjectName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MonoBehaviourCallbackHooks::*)()>(&GlobalNamespace::MonoBehaviourCallbackHooks::GetGameObjectName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a32120;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MonoBehaviourCallbackHooks),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MonoBehaviourCallbackHooks>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MonoBehaviourCallbackHooks.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonoBehaviourCallbackHooks::*)()>(&GlobalNamespace::MonoBehaviourCallbackHooks::Update)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a32160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MonoBehaviourCallbackHooks>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MonoBehaviourCallbackHooks._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonoBehaviourCallbackHooks::*)()>(&GlobalNamespace::MonoBehaviourCallbackHooks::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a32190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MonoBehaviourCallbackHooks>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MonoBehaviourCallbackHooks::__set_m_OnUpdateDelegate(System::Action_1<float_t> value)  {
::cordl_internals::setInstanceField<System::Action_1<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<float_t>>(value));
}
constexpr System::Action_1<float_t> GlobalNamespace::MonoBehaviourCallbackHooks::__get_m_OnUpdateDelegate() const {
return ::cordl_internals::getInstanceField<System::Action_1<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MonoBehaviourCallbackHooks::add_OnUpdateDelegate(System::Action_1<float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MonoBehaviourCallbackHooks>::get(),
                            "add_OnUpdateDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MonoBehaviourCallbackHooks::remove_OnUpdateDelegate(System::Action_1<float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MonoBehaviourCallbackHooks>::get(),
                            "remove_OnUpdateDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW GlobalNamespace::MonoBehaviourCallbackHooks::GetGameObjectName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MonoBehaviourCallbackHooks>::get(),
                            "GetGameObjectName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MonoBehaviourCallbackHooks::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MonoBehaviourCallbackHooks>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MonoBehaviourCallbackHooks::MonoBehaviourCallbackHooks()  : UnityEngine::ResourceManagement::Util::ComponentSingleton_1<GlobalNamespace::MonoBehaviourCallbackHooks>(THROW_UNLESS(::il2cpp_utils::New<MonoBehaviourCallbackHooks>())) {}
 void GlobalNamespace::MonoBehaviourCallbackHooks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MonoBehaviourCallbackHooks>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
