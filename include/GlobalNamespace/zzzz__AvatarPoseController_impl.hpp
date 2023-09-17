#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__AvatarPoseController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__HeadBodyOffsetSO_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x20bfcb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate::Invoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x20bfd78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x20bfd9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ::System::IAsyncResult)>(&::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x20bfebc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate>(object, method))) {}
 void ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate::Invoke(::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition, ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition, newRightHandPosition);
}
 ::System::IAsyncResult ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate::BeginInvoke(::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition, ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition, newRightHandPosition, callback, object);
}
 void ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate::EndInvoke(ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newHeadPosition, newLeftHandPosition, newRightHandPosition, result);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x20bfee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate::*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate::Invoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x20bffa4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate::*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x20bffd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ::System::IAsyncResult)>(&::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x20c0130;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate>(object, method))) {}
 void ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate::Invoke(::UnityEngine::Quaternion headRotation, ::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition, ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, headRotation, headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition, newRightHandPosition);
}
 ::System::IAsyncResult ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate::BeginInvoke(::UnityEngine::Quaternion headRotation, ::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition, ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, headRotation, headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition, newRightHandPosition, callback, object);
}
 void ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate::EndInvoke(ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newHeadPosition, newLeftHandPosition, newRightHandPosition, result);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x20c0154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate::*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>)>(&::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate::Invoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20c0218;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate::*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x20c0240;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate::*)(ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>, ::System::IAsyncResult)>(&::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x20c0358;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate>(object, method))) {}
 void ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate::Invoke(::UnityEngine::Quaternion headRotation, ::UnityEngine::Quaternion leftHandRotation, ::UnityEngine::Quaternion rightHandRotation, ByRef<::UnityEngine::Quaternion> newHeadRotation, ByRef<::UnityEngine::Quaternion> newLeftHandRotation, ByRef<::UnityEngine::Quaternion> newRightHandRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, headRotation, leftHandRotation, rightHandRotation, newHeadRotation, newLeftHandRotation, newRightHandRotation);
}
 ::System::IAsyncResult ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate::BeginInvoke(::UnityEngine::Quaternion headRotation, ::UnityEngine::Quaternion leftHandRotation, ::UnityEngine::Quaternion rightHandRotation, ByRef<::UnityEngine::Quaternion> newHeadRotation, ByRef<::UnityEngine::Quaternion> newLeftHandRotation, ByRef<::UnityEngine::Quaternion> newRightHandRotation, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, headRotation, leftHandRotation, rightHandRotation, newHeadRotation, newLeftHandRotation, newRightHandRotation, callback, object);
}
 void ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate::EndInvoke(ByRef<::UnityEngine::Quaternion> newHeadRotation, ByRef<::UnityEngine::Quaternion> newLeftHandRotation, ByRef<::UnityEngine::Quaternion> newRightHandRotation, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newHeadRotation, newLeftHandRotation, newRightHandRotation, result);
}
//  Writing Method size for method: ::GlobalNamespace::AvatarPoseController.get_earlyPositionsWillBeSetCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate (::GlobalNamespace::AvatarPoseController::*)()>(&::GlobalNamespace::AvatarPoseController::get_earlyPositionsWillBeSetCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20bfadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "get_earlyPositionsWillBeSetCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarPoseController.set_earlyPositionsWillBeSetCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarPoseController::*)(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate)>(&::GlobalNamespace::AvatarPoseController::set_earlyPositionsWillBeSetCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20bfae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "set_earlyPositionsWillBeSetCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarPoseController.get_latePositionsWillBeSetCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate (::GlobalNamespace::AvatarPoseController::*)()>(&::GlobalNamespace::AvatarPoseController::get_latePositionsWillBeSetCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20bfaec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "get_latePositionsWillBeSetCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarPoseController.set_latePositionsWillBeSetCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarPoseController::*)(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate)>(&::GlobalNamespace::AvatarPoseController::set_latePositionsWillBeSetCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20bfaf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "set_latePositionsWillBeSetCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarPoseController.get_earlyRotationsWillBeSetCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate (::GlobalNamespace::AvatarPoseController::*)()>(&::GlobalNamespace::AvatarPoseController::get_earlyRotationsWillBeSetCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20bfafc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "get_earlyRotationsWillBeSetCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarPoseController.set_earlyRotationsWillBeSetCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarPoseController::*)(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate)>(&::GlobalNamespace::AvatarPoseController::set_earlyRotationsWillBeSetCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20bfb04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "set_earlyRotationsWillBeSetCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarPoseController.add_didUpdatePoseEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarPoseController::*)(::System::Action_1<::UnityEngine::Vector3>)>(&::GlobalNamespace::AvatarPoseController::add_didUpdatePoseEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20bf840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "add_didUpdatePoseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarPoseController.remove_didUpdatePoseEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarPoseController::*)(::System::Action_1<::UnityEngine::Vector3>)>(&::GlobalNamespace::AvatarPoseController::remove_didUpdatePoseEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20bf9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "remove_didUpdatePoseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarPoseController.UpdateTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarPoseController::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::GlobalNamespace::AvatarPoseController::UpdateTransforms)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x20bfb0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "UpdateTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarPoseController.UpdateBodyPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarPoseController::*)()>(&::GlobalNamespace::AvatarPoseController::UpdateBodyPosition)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x20bf4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "UpdateBodyPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarPoseController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarPoseController::*)()>(&::GlobalNamespace::AvatarPoseController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20bfcac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::AvatarPoseController::__set__headTransform(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::GlobalNamespace::AvatarPoseController::__get__headTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AvatarPoseController::__set__leftHandTransform(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::GlobalNamespace::AvatarPoseController::__get__leftHandTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AvatarPoseController::__set__rightHandTransform(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::GlobalNamespace::AvatarPoseController::__get__rightHandTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AvatarPoseController::__set__bodyTransform(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::GlobalNamespace::AvatarPoseController::__get__bodyTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AvatarPoseController::__set__headBodyOffset(::GlobalNamespace::HeadBodyOffsetSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::HeadBodyOffsetSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::HeadBodyOffsetSO>(value));
}
constexpr ::GlobalNamespace::HeadBodyOffsetSO ::GlobalNamespace::AvatarPoseController::__get__headBodyOffset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HeadBodyOffsetSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AvatarPoseController::__set__earlyPositionsWillBeSetCallback_k__BackingField(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate ::GlobalNamespace::AvatarPoseController::__get__earlyPositionsWillBeSetCallback_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AvatarPoseController::__set__latePositionsWillBeSetCallback_k__BackingField(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate ::GlobalNamespace::AvatarPoseController::__get__latePositionsWillBeSetCallback_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AvatarPoseController::__set__earlyRotationsWillBeSetCallback_k__BackingField(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate ::GlobalNamespace::AvatarPoseController::__get__earlyRotationsWillBeSetCallback_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AvatarPoseController::__set_didUpdatePoseEvent(::System::Action_1<::UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::Vector3>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::UnityEngine::Vector3>>(value));
}
constexpr ::System::Action_1<::UnityEngine::Vector3> ::GlobalNamespace::AvatarPoseController::__get_didUpdatePoseEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::Vector3>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate ::GlobalNamespace::AvatarPoseController::get_earlyPositionsWillBeSetCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "get_earlyPositionsWillBeSetCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::AvatarPoseController::set_earlyPositionsWillBeSetCallback(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "set_earlyPositionsWillBeSetCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate ::GlobalNamespace::AvatarPoseController::get_latePositionsWillBeSetCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "get_latePositionsWillBeSetCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::AvatarPoseController::set_latePositionsWillBeSetCallback(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "set_latePositionsWillBeSetCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate ::GlobalNamespace::AvatarPoseController::get_earlyRotationsWillBeSetCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "get_earlyRotationsWillBeSetCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::AvatarPoseController::set_earlyRotationsWillBeSetCallback(::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "set_earlyRotationsWillBeSetCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::AvatarPoseController::add_didUpdatePoseEvent(::System::Action_1<::UnityEngine::Vector3> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "add_didUpdatePoseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::AvatarPoseController::remove_didUpdatePoseEvent(::System::Action_1<::UnityEngine::Vector3> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "remove_didUpdatePoseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::AvatarPoseController::UpdateTransforms(::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition, ::UnityEngine::Quaternion headRotation, ::UnityEngine::Quaternion leftHandRotation, ::UnityEngine::Quaternion rightHandRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "UpdateTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, headPosition, leftHandPosition, rightHandPosition, headRotation, leftHandRotation, rightHandRotation);
}
 void ::GlobalNamespace::AvatarPoseController::UpdateBodyPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            "UpdateBodyPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::AvatarPoseController::AvatarPoseController()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<AvatarPoseController>())) {}
 void ::GlobalNamespace::AvatarPoseController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarPoseController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
