#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "RootMotion/FinalIK/zzzz__InteractionSystem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionLookAt_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionTarget_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionObject_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionTrigger_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionTrigger_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionObject_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x11fd7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x11ff064;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x11ff078;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate::*)(::System::IAsyncResult)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11ff108;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____RootMotion__FinalIK__InteractionSystem__InteractionDelegate>(object, method))) {}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate::Invoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject interactionObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, effectorType, interactionObject);
}
 ::System::IAsyncResult ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate::BeginInvoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject interactionObject, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, effectorType, interactionObject, callback, object);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x11ff114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject, ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x11ff1d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject, ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x11ff1ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate::*)(::System::IAsyncResult)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11ff284;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate>(object, method))) {}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate::Invoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject interactionObject, ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent interactionEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, effectorType, interactionObject, interactionEvent);
}
 ::System::IAsyncResult ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate::BeginInvoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject interactionObject, ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent interactionEvent, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionObject__InteractionEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, effectorType, interactionObject, interactionEvent, callback, object);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenUserManual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11fb618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OpenUserManual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenScriptReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11fb65c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OpenScriptReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenTutorial1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OpenTutorial1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11fb6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OpenTutorial1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenTutorial2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OpenTutorial2)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11fb6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OpenTutorial2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenTutorial3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OpenTutorial3)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11fb728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OpenTutorial3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenTutorial4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OpenTutorial4)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11fb76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OpenTutorial4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.SupportGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::SupportGroup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11fb7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "SupportGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.ASThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::ASThread)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11fb7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "ASThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.get_inInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::get_inInteraction)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x11fb838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "get_inInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.IsInInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(&::RootMotion::FinalIK::InteractionSystem::IsInInteraction)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x11fb9b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "IsInInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.IsPaused
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(&::RootMotion::FinalIK::InteractionSystem::IsPaused)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x11fba68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "IsPaused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.IsPaused
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::IsPaused)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x11fbb20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "IsPaused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.IsInSync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::IsInSync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x11fbbb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "IsInSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.StartInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject, bool)>(&::RootMotion::FinalIK::InteractionSystem::StartInteraction)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x11fbc9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "StartInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.PauseInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(&::RootMotion::FinalIK::InteractionSystem::PauseInteraction)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x11fbd94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "PauseInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.ResumeInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(&::RootMotion::FinalIK::InteractionSystem::ResumeInteraction)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x11fbe18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "ResumeInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.StopInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(&::RootMotion::FinalIK::InteractionSystem::StopInteraction)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x11fbe9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "StopInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.PauseAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::PauseAll)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x11fbf20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "PauseAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.ResumeAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::ResumeAll)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x11fbf88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "ResumeAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.StopAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::StopAll)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x11fbff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "StopAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetInteractionObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::InteractionObject (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(&::RootMotion::FinalIK::InteractionSystem::GetInteractionObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x11fc04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetInteractionObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(&::RootMotion::FinalIK::InteractionSystem::GetProgress)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x11fc0cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetMinActiveProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::GetMinActiveProgress)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x11fc174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetMinActiveProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.TriggerInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t, bool)>(&::RootMotion::FinalIK::InteractionSystem::TriggerInteraction)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x11fc244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "TriggerInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.TriggerInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t, bool, ByRef<::RootMotion::FinalIK::InteractionObject>)>(&::RootMotion::FinalIK::InteractionSystem::TriggerInteraction)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x11fc4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "TriggerInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::FinalIK::InteractionObject>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.TriggerInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t, bool, ByRef<::RootMotion::FinalIK::InteractionTarget>)>(&::RootMotion::FinalIK::InteractionSystem::TriggerInteraction)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x11fc690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "TriggerInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::FinalIK::InteractionTarget>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestInteractionRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionTrigger__Range (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionRange)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x11fc8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetClosestInteractionRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestInteractionObjectInRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::InteractionObject (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionObjectInRange)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x11fcb84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetClosestInteractionObjectInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestInteractionTargetInRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::InteractionTarget (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionTargetInRange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x11fcbbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetClosestInteractionTargetInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestInteractionObjectsInRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::InteractionObject> (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionObjectsInRange)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x11fcc1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetClosestInteractionObjectsInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestInteractionTargetsInRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::InteractionTarget> (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionTargetsInRange)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x11fcd24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetClosestInteractionTargetsInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.TriggerEffectorsReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t)>(&::RootMotion::FinalIK::InteractionSystem::TriggerEffectorsReady)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x11fcf04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "TriggerEffectorsReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetTriggerRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionTrigger__Range (::RootMotion::FinalIK::InteractionSystem::*)(int32_t)>(&::RootMotion::FinalIK::InteractionSystem::GetTriggerRange)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x11fd178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetTriggerRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestTriggerIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::GetClosestTriggerIndex)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x11fc9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetClosestTriggerIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.get_ik
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::FullBodyBipedIK (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::get_ik)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11fd298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "get_ik",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.set_ik
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedIK)>(&::RootMotion::FinalIK::InteractionSystem::set_ik)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11fd2a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "set_ik",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedIK>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.get_triggersInRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger> (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::get_triggersInRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11fd2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "get_triggersInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.set_triggersInRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger>)>(&::RootMotion::FinalIK::InteractionSystem::set_triggersInRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11fd2b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "set_triggersInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::Start)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x11fd2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.InteractionPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject)>(&::RootMotion::FinalIK::InteractionSystem::InteractionPause)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x11fdb04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "InteractionPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.InteractionResume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject)>(&::RootMotion::FinalIK::InteractionSystem::InteractionResume)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x11fdb24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "InteractionResume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.InteractionStop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject)>(&::RootMotion::FinalIK::InteractionSystem::InteractionStop)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x11fdb40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "InteractionStop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.LookAtInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject)>(&::RootMotion::FinalIK::InteractionSystem::LookAtInteraction)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x11fdb5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "LookAtInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnTriggerEnter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(::UnityEngine::Collider)>(&::RootMotion::FinalIK::InteractionSystem::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x11fdbb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OnTriggerEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnTriggerExit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(::UnityEngine::Collider)>(&::RootMotion::FinalIK::InteractionSystem::OnTriggerExit)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x11fdd1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OnTriggerExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.ContactIsInRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t, ByRef<int32_t>)>(&::RootMotion::FinalIK::InteractionSystem::ContactIsInRange)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x11fde18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "ContactIsInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnDrawGizmosSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x11fe174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OnDrawGizmosSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::Update)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x11fe258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.Raycasting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::Raycasting)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x11fe53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "Raycasting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.UpdateTriggerEventBroadcasting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::UpdateTriggerEventBroadcasting)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x11fd8bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "UpdateTriggerEventBroadcasting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.UpdateEffectors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::UpdateEffectors)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x11fe66c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "UpdateEffectors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnPreFBBIK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OnPreFBBIK)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x11fe778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OnPreFBBIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnPostFBBIK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OnPostFBBIK)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x11fe800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OnPostFBBIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnFixTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OnFixTransforms)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x11fe8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OnFixTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OnDestroy)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x11fe8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(bool)>(&::RootMotion::FinalIK::InteractionSystem::IsValid)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x11fb8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.TriggerIndexIsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t)>(&::RootMotion::FinalIK::InteractionSystem::TriggerIndexIsValid)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x11fc3c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "TriggerIndexIsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::_ctor)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x11fecc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_targetTag(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::RootMotion::FinalIK::InteractionSystem::__get_targetTag() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_fadeInTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::InteractionSystem::__get_fadeInTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_speed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::InteractionSystem::__get_speed() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_resetToDefaultsSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::InteractionSystem::__get_resetToDefaultsSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_characterCollider(::UnityEngine::Collider value)  {
::cordl_internals::setInstanceField<::UnityEngine::Collider, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Collider>(value));
}
constexpr ::UnityEngine::Collider ::RootMotion::FinalIK::InteractionSystem::__get_characterCollider() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Collider, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_FPSCamera(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::FinalIK::InteractionSystem::__get_FPSCamera() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_camRaycastLayers(::UnityEngine::LayerMask value)  {
::cordl_internals::setInstanceField<::UnityEngine::LayerMask, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::LayerMask>(value));
}
constexpr ::UnityEngine::LayerMask ::RootMotion::FinalIK::InteractionSystem::__get_camRaycastLayers() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_camRaycastDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::InteractionSystem::__get_camRaycastDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set__triggersInRange_k__BackingField(::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger>>(value));
}
constexpr ::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger> ::RootMotion::FinalIK::InteractionSystem::__get__triggersInRange_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_inContact(::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger>>(value));
}
constexpr ::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger> ::RootMotion::FinalIK::InteractionSystem::__get_inContact() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_bestRangeIndexes(::System::Collections::Generic::List_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<int32_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::List_1<int32_t> ::RootMotion::FinalIK::InteractionSystem::__get_bestRangeIndexes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_OnInteractionStart(::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate>(value));
}
constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate ::RootMotion::FinalIK::InteractionSystem::__get_OnInteractionStart() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_OnInteractionPause(::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate>(value));
}
constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate ::RootMotion::FinalIK::InteractionSystem::__get_OnInteractionPause() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_OnInteractionPickUp(::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate>(value));
}
constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate ::RootMotion::FinalIK::InteractionSystem::__get_OnInteractionPickUp() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_OnInteractionResume(::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate>(value));
}
constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate ::RootMotion::FinalIK::InteractionSystem::__get_OnInteractionResume() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_OnInteractionStop(::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate>(value));
}
constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate ::RootMotion::FinalIK::InteractionSystem::__get_OnInteractionStop() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionDelegate, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_OnInteractionEvent(::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate>(value));
}
constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate ::RootMotion::FinalIK::InteractionSystem::__get_OnInteractionEvent() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionSystem__InteractionEventDelegate, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_raycastHit(::UnityEngine::RaycastHit value)  {
::cordl_internals::setInstanceField<::UnityEngine::RaycastHit, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RaycastHit>(value));
}
constexpr ::UnityEngine::RaycastHit ::RootMotion::FinalIK::InteractionSystem::__get_raycastHit() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RaycastHit, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_fullBody(::RootMotion::FinalIK::FullBodyBipedIK value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::FullBodyBipedIK, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::FullBodyBipedIK>(value));
}
constexpr ::RootMotion::FinalIK::FullBodyBipedIK ::RootMotion::FinalIK::InteractionSystem::__get_fullBody() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::FullBodyBipedIK, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_lookAt(::RootMotion::FinalIK::InteractionLookAt value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::InteractionLookAt, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::InteractionLookAt>(value));
}
constexpr ::RootMotion::FinalIK::InteractionLookAt ::RootMotion::FinalIK::InteractionSystem::__get_lookAt() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::InteractionLookAt, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_interactionEffectors(::ArrayW<::RootMotion::FinalIK::InteractionEffector> value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::InteractionEffector>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::RootMotion::FinalIK::InteractionEffector>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::InteractionEffector> ::RootMotion::FinalIK::InteractionSystem::__get_interactionEffectors() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::InteractionEffector>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_initiated(bool value)  {
::cordl_internals::setInstanceField<bool, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::InteractionSystem::__get_initiated() const {
return ::cordl_internals::getInstanceField<bool, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_lastCollider(::UnityEngine::Collider value)  {
::cordl_internals::setInstanceField<::UnityEngine::Collider, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Collider>(value));
}
constexpr ::UnityEngine::Collider ::RootMotion::FinalIK::InteractionSystem::__get_lastCollider() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Collider, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::InteractionSystem::__set_c(::UnityEngine::Collider value)  {
::cordl_internals::setInstanceField<::UnityEngine::Collider, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Collider>(value));
}
constexpr ::UnityEngine::Collider ::RootMotion::FinalIK::InteractionSystem::__get_c() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Collider, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::RootMotion::FinalIK::InteractionSystem::OpenUserManual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OpenUserManual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::OpenScriptReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OpenScriptReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::OpenTutorial1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OpenTutorial1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::OpenTutorial2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OpenTutorial2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::OpenTutorial3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OpenTutorial3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::OpenTutorial4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OpenTutorial4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::SupportGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "SupportGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::ASThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "ASThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::RootMotion::FinalIK::InteractionSystem::get_inInteraction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "get_inInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::RootMotion::FinalIK::InteractionSystem::IsInInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "IsInInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, effectorType);
}
 bool ::RootMotion::FinalIK::InteractionSystem::IsPaused(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "IsPaused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, effectorType);
}
 bool ::RootMotion::FinalIK::InteractionSystem::IsPaused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "IsPaused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::RootMotion::FinalIK::InteractionSystem::IsInSync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "IsInSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::RootMotion::FinalIK::InteractionSystem::StartInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject interactionObject, bool interrupt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "StartInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, effectorType, interactionObject, interrupt);
}
 bool ::RootMotion::FinalIK::InteractionSystem::PauseInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "PauseInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, effectorType);
}
 bool ::RootMotion::FinalIK::InteractionSystem::ResumeInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "ResumeInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, effectorType);
}
 bool ::RootMotion::FinalIK::InteractionSystem::StopInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "StopInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, effectorType);
}
 void ::RootMotion::FinalIK::InteractionSystem::PauseAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "PauseAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::ResumeAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "ResumeAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::StopAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "StopAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::RootMotion::FinalIK::InteractionObject ::RootMotion::FinalIK::InteractionSystem::GetInteractionObject(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetInteractionObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::InteractionObject, false>(const_cast<void*>(instance), ___internal_method, effectorType);
}
 float_t ::RootMotion::FinalIK::InteractionSystem::GetProgress(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, effectorType);
}
 float_t ::RootMotion::FinalIK::InteractionSystem::GetMinActiveProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetMinActiveProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::RootMotion::FinalIK::InteractionSystem::TriggerInteraction(int32_t index, bool interrupt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "TriggerInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, index, interrupt);
}
 bool ::RootMotion::FinalIK::InteractionSystem::TriggerInteraction(int32_t index, bool interrupt, ByRef<::RootMotion::FinalIK::InteractionObject> interactionObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "TriggerInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::FinalIK::InteractionObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, index, interrupt, interactionObject);
}
 bool ::RootMotion::FinalIK::InteractionSystem::TriggerInteraction(int32_t index, bool interrupt, ByRef<::RootMotion::FinalIK::InteractionTarget> interactionTarget)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "TriggerInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::FinalIK::InteractionTarget>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, index, interrupt, interactionTarget);
}
 ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionTrigger__Range ::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionRange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetClosestInteractionRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionTrigger__Range, false>(const_cast<void*>(instance), ___internal_method);
}
 ::RootMotion::FinalIK::InteractionObject ::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionObjectInRange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetClosestInteractionObjectInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::InteractionObject, false>(const_cast<void*>(instance), ___internal_method);
}
 ::RootMotion::FinalIK::InteractionTarget ::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionTargetInRange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetClosestInteractionTargetInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::InteractionTarget, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::RootMotion::FinalIK::InteractionObject> ::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionObjectsInRange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetClosestInteractionObjectsInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::InteractionObject>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::RootMotion::FinalIK::InteractionTarget> ::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionTargetsInRange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetClosestInteractionTargetsInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::InteractionTarget>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::RootMotion::FinalIK::InteractionSystem::TriggerEffectorsReady(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "TriggerEffectorsReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, index);
}
 ::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionTrigger__Range ::RootMotion::FinalIK::InteractionSystem::GetTriggerRange(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetTriggerRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::____RootMotion__FinalIK__InteractionTrigger__Range, false>(const_cast<void*>(instance), ___internal_method, index);
}
 int32_t ::RootMotion::FinalIK::InteractionSystem::GetClosestTriggerIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "GetClosestTriggerIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::RootMotion::FinalIK::FullBodyBipedIK ::RootMotion::FinalIK::InteractionSystem::get_ik()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "get_ik",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::FullBodyBipedIK, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::set_ik(::RootMotion::FinalIK::FullBodyBipedIK value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "set_ik",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedIK>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger> ::RootMotion::FinalIK::InteractionSystem::get_triggersInRange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "get_triggersInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::set_triggersInRange(::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "set_triggersInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::RootMotion::FinalIK::InteractionSystem::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::InteractionPause(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject interactionObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "InteractionPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, effector, interactionObject);
}
 void ::RootMotion::FinalIK::InteractionSystem::InteractionResume(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject interactionObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "InteractionResume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, effector, interactionObject);
}
 void ::RootMotion::FinalIK::InteractionSystem::InteractionStop(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject interactionObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "InteractionStop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, effector, interactionObject);
}
 void ::RootMotion::FinalIK::InteractionSystem::LookAtInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject interactionObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "LookAtInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, effector, interactionObject);
}
 void ::RootMotion::FinalIK::InteractionSystem::OnTriggerEnter(::UnityEngine::Collider c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OnTriggerEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c);
}
 void ::RootMotion::FinalIK::InteractionSystem::OnTriggerExit(::UnityEngine::Collider c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OnTriggerExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c);
}
 bool ::RootMotion::FinalIK::InteractionSystem::ContactIsInRange(int32_t index, ByRef<int32_t> bestRangeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "ContactIsInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, index, bestRangeIndex);
}
 void ::RootMotion::FinalIK::InteractionSystem::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OnDrawGizmosSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::Raycasting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "Raycasting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::UpdateTriggerEventBroadcasting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "UpdateTriggerEventBroadcasting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::UpdateEffectors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "UpdateEffectors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::OnPreFBBIK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OnPreFBBIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::OnPostFBBIK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OnPostFBBIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::OnFixTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OnFixTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::InteractionSystem::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::RootMotion::FinalIK::InteractionSystem::IsValid(bool log)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, log);
}
 bool ::RootMotion::FinalIK::InteractionSystem::TriggerIndexIsValid(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            "TriggerIndexIsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, index);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::InteractionSystem::InteractionSystem()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<InteractionSystem>())) {}
 void ::RootMotion::FinalIK::InteractionSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
