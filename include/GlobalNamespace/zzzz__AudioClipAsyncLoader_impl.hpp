#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__IReferenceCountingCache_2_def.hpp"
#include "GlobalNamespace/zzzz__IMediaAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongPreviewAudioClipProvider_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x21a12e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> (::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::*)()>(&::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21a13a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::*)(::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21a13b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> (::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::*)(::System::IAsyncResult)>(&::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21a13d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>(object, method))) {}
 void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::IAsyncResult ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::*)()>(&::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a13e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0._Load_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> (::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::*)()>(&::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::_Load_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x21a13ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0>::get(),
                            "<Load>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::__set_audioClip(::UnityEngine::AudioClip value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioClip, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AudioClip>(value));
}
constexpr ::UnityEngine::AudioClip ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::__get_audioClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0::_Load_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0>::get(),
                            "<Load>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::*)()>(&::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a145c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0._Load_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> (::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::*)()>(&::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::_Load_b__0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21a1464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0>::get(),
                            "<Load>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::__set___4__this(::GlobalNamespace::AudioClipAsyncLoader value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioClipAsyncLoader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AudioClipAsyncLoader>(value));
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioClipAsyncLoader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::__set_audioClipFilePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::__get_audioClipFilePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0::_Load_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0>::get(),
                            "<Load>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c::*)()>(&::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a1578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c._Unload_b__19_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c::*)(::UnityEngine::AudioClip)>(&::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c::_Unload_b__19_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21a1580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c>::get(),
                            "<Unload>b__19_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c::__set___9(::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c value)  {
::cordl_internals::setStaticField<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c>::get>(std::forward<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c>(value));
}
 ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c::__get___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c>::get>();
}
 void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c::__set___9__19_0(::System::Action_1<::UnityEngine::AudioClip> value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::AudioClip>, "<>9__19_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c>::get>(std::forward<::System::Action_1<::UnityEngine::AudioClip>>(value));
}
 ::System::Action_1<::UnityEngine::AudioClip> ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c::__get___9__19_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::AudioClip>, "<>9__19_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c>::get>();
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c::____GlobalNamespace__AudioClipAsyncLoader____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__AudioClipAsyncLoader____c>())) {}
 void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c::_Unload_b__19_0(::UnityEngine::AudioClip loadedAudioClip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader____c>::get(),
                            "<Unload>b__19_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, loadedAudioClip);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::*)()>(&::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x21a1598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21a1920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AudioClipAsyncLoader", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cacheKey", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "onDelete", ty: "::System::Action_1<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::AudioClipAsyncLoader __4__this, int32_t cacheKey, ::System::Action_1<::UnityEngine::AudioClip> onDelete, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cacheKey = cacheKey;
this->onDelete = onDelete;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__set___4__this(::GlobalNamespace::AudioClipAsyncLoader value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioClipAsyncLoader, 0x28>(this->__instance, std::forward<::GlobalNamespace::AudioClipAsyncLoader>(value));
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioClipAsyncLoader, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__set_cacheKey(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__get_cacheKey() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__set_onDelete(::System::Action_1<::UnityEngine::AudioClip> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::AudioClip>, 0x38>(this->__instance, std::forward<::System::Action_1<::UnityEngine::AudioClip>>(value));
}
constexpr ::System::Action_1<::UnityEngine::AudioClip> ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__get_onDelete() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::AudioClip>, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip>, 0x40>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip> ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip>, 0x40>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader___Unload_d__21>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IReferenceCountingCache_2<int32_t,::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>>, ::GlobalNamespace::IMediaAsyncLoader)>(&::GlobalNamespace::AudioClipAsyncLoader::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x219ef9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReferenceCountingCache_2<int32_t,::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMediaAsyncLoader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.LoadPreview
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IPreviewBeatmapLevel)>(&::GlobalNamespace::AudioClipAsyncLoader::LoadPreview)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x219efc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "LoadPreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.LoadSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IBeatmapLevel)>(&::GlobalNamespace::AudioClipAsyncLoader::LoadSong)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x219f314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "LoadSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.UnloadPreview
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IPreviewBeatmapLevel)>(&::GlobalNamespace::AudioClipAsyncLoader::UnloadPreview)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x219f660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "UnloadPreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.UnloadSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IBeatmapLevel)>(&::GlobalNamespace::AudioClipAsyncLoader::UnloadSong)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x219f96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "UnloadSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongPreviewAudioClipProvider)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x219f1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongPreviewAudioClipProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongAudioClipProvider)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x219f508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongAudioClipProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x219f268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongAudioClipProvider)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x219f5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongAudioClipProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongPreviewAudioClipProvider)>(&::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x219f814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongPreviewAudioClipProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongAudioClipProvider)>(&::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x219fb20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongAudioClipProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider)>(&::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x219f8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongAudioClipProvider)>(&::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x219fbcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongAudioClipProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> (::GlobalNamespace::AudioClipAsyncLoader::*)(::UnityEngine::AudioClip)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x219fc78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> (::GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x219fd54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> (::GlobalNamespace::AudioClipAsyncLoader::*)(int32_t, ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x21a0000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::UnityEngine::AudioClip)>(&::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x219fe30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(&::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x219ff3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(int32_t, ::System::Action_1<::UnityEngine::AudioClip>)>(&::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21a01e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AudioClip>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.GetCacheKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::AudioClipAsyncLoader::*)(::UnityEngine::AudioClip)>(&::GlobalNamespace::AudioClipAsyncLoader::GetCacheKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x219ffe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "GetCacheKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.GetCacheKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(&::GlobalNamespace::AudioClipAsyncLoader::GetCacheKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21a01c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "GetCacheKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.LogError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::AudioClipAsyncLoader::LogError)> {
  constexpr static std::size_t size = 0x1058;
  constexpr static std::size_t addrs = 0x21a0290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::AudioClipAsyncLoader::__set__cache(::GlobalNamespace::IReferenceCountingCache_2<int32_t,::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IReferenceCountingCache_2<int32_t,::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IReferenceCountingCache_2<int32_t,::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>>>(value));
}
constexpr ::GlobalNamespace::IReferenceCountingCache_2<int32_t,::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>> ::GlobalNamespace::AudioClipAsyncLoader::__get__cache() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReferenceCountingCache_2<int32_t,::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AudioClipAsyncLoader::__set__mediaAsyncLoader(::GlobalNamespace::IMediaAsyncLoader value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMediaAsyncLoader, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IMediaAsyncLoader>(value));
}
constexpr ::GlobalNamespace::IMediaAsyncLoader ::GlobalNamespace::AudioClipAsyncLoader::__get__mediaAsyncLoader() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMediaAsyncLoader, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "cache", ty: "::GlobalNamespace::IReferenceCountingCache_2<int32_t,::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>>", modifiers: "", def_value: None }, CppParam { name: "mediaAsyncLoader", ty: "::GlobalNamespace::IMediaAsyncLoader", modifiers: "", def_value: None }]
 ::GlobalNamespace::AudioClipAsyncLoader::AudioClipAsyncLoader(::GlobalNamespace::IReferenceCountingCache_2<int32_t,::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>> cache, ::GlobalNamespace::IMediaAsyncLoader mediaAsyncLoader)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AudioClipAsyncLoader>(cache, mediaAsyncLoader))) {}
 void ::GlobalNamespace::AudioClipAsyncLoader::_ctor(::GlobalNamespace::IReferenceCountingCache_2<int32_t,::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>> cache, ::GlobalNamespace::IMediaAsyncLoader mediaAsyncLoader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReferenceCountingCache_2<int32_t,::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMediaAsyncLoader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cache, mediaAsyncLoader);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> ::GlobalNamespace::AudioClipAsyncLoader::LoadPreview(::GlobalNamespace::IPreviewBeatmapLevel beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "LoadPreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, beatmapLevel);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> ::GlobalNamespace::AudioClipAsyncLoader::LoadSong(::GlobalNamespace::IBeatmapLevel beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "LoadSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, beatmapLevel);
}
 void ::GlobalNamespace::AudioClipAsyncLoader::UnloadPreview(::GlobalNamespace::IPreviewBeatmapLevel beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "UnloadPreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevel);
}
 void ::GlobalNamespace::AudioClipAsyncLoader::UnloadSong(::GlobalNamespace::IBeatmapLevel beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "UnloadSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevel);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> ::GlobalNamespace::AudioClipAsyncLoader::Load(::GlobalNamespace::IAssetSongPreviewAudioClipProvider source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongPreviewAudioClipProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, source);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> ::GlobalNamespace::AudioClipAsyncLoader::Load(::GlobalNamespace::IAssetSongAudioClipProvider source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongAudioClipProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, source);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> ::GlobalNamespace::AudioClipAsyncLoader::Load(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, source);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> ::GlobalNamespace::AudioClipAsyncLoader::Load(::GlobalNamespace::IFilePathSongAudioClipProvider source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongAudioClipProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, source);
}
 void ::GlobalNamespace::AudioClipAsyncLoader::Unload(::GlobalNamespace::IAssetSongPreviewAudioClipProvider source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongPreviewAudioClipProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source);
}
 void ::GlobalNamespace::AudioClipAsyncLoader::Unload(::GlobalNamespace::IAssetSongAudioClipProvider source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongAudioClipProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source);
}
 void ::GlobalNamespace::AudioClipAsyncLoader::Unload(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source);
}
 void ::GlobalNamespace::AudioClipAsyncLoader::Unload(::GlobalNamespace::IFilePathSongAudioClipProvider source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongAudioClipProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> ::GlobalNamespace::AudioClipAsyncLoader::Load(::UnityEngine::AudioClip audioClip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, audioClip);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> ::GlobalNamespace::AudioClipAsyncLoader::Load(::StringW audioClipFilePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, audioClipFilePath);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> ::GlobalNamespace::AudioClipAsyncLoader::Load(int32_t cacheKey, ::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate loadMethodDelegate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, cacheKey, loadMethodDelegate);
}
 void ::GlobalNamespace::AudioClipAsyncLoader::Unload(::UnityEngine::AudioClip audioClip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, audioClip);
}
 void ::GlobalNamespace::AudioClipAsyncLoader::Unload(::StringW audioClipFilePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, audioClipFilePath);
}
 void ::GlobalNamespace::AudioClipAsyncLoader::Unload(int32_t cacheKey, ::System::Action_1<::UnityEngine::AudioClip> onDelete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AudioClip>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cacheKey, onDelete);
}
 int32_t ::GlobalNamespace::AudioClipAsyncLoader::GetCacheKey(::UnityEngine::AudioClip audioClip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "GetCacheKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, audioClip);
}
 int32_t ::GlobalNamespace::AudioClipAsyncLoader::GetCacheKey(::StringW audioClipFilePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "GetCacheKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, audioClipFilePath);
}
 void ::GlobalNamespace::AudioClipAsyncLoader::LogError(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
} // end anonymous namespace
