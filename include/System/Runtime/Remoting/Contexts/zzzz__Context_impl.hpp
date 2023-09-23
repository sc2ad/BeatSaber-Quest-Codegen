#pragma once
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/zzzz__LocalDataStoreHolder_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__CrossContextDelegate_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__LocalDataStore_def.hpp"
#include "System/zzzz__ContextBoundObject_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContextProperty_def.hpp"
#include "System/zzzz__LocalDataStoreMgr_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__ContextCallbackObject_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__DynamicPropertyCollection_def.hpp"
#include "System/zzzz__LocalDataStoreSlot_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicProperty_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.RegisterContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Runtime::Remoting::Contexts::Context)>(&System::Runtime::Remoting::Contexts::Context::RegisterContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23302a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "RegisterContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.ReleaseContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Runtime::Remoting::Contexts::Context)>(&System::Runtime::Remoting::Contexts::Context::ReleaseContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23302ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "ReleaseContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::Context::*)()>(&System::Runtime::Remoting::Contexts::Context::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23302b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::Context::*)()>(&System::Runtime::Remoting::Contexts::Context::Finalize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2330334;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Contexts::Context),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.get_DefaultContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Contexts::Context (*)()>(&System::Runtime::Remoting::Contexts::Context::get_DefaultContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2327b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "get_DefaultContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.get_ContextID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Runtime::Remoting::Contexts::Context::*)()>(&System::Runtime::Remoting::Contexts::Context::get_ContextID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2330404;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Contexts::Context),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.get_ContextProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Runtime::Remoting::Contexts::IContextProperty> (System::Runtime::Remoting::Contexts::Context::*)()>(&System::Runtime::Remoting::Contexts::Context::get_ContextProperties)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x233040c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Contexts::Context),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.get_IsDefaultContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Contexts::Context::*)()>(&System::Runtime::Remoting::Contexts::Context::get_IsDefaultContext)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2330480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "get_IsDefaultContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.get_NeedsContextSink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Contexts::Context::*)()>(&System::Runtime::Remoting::Contexts::Context::get_NeedsContextSink)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2330490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "get_NeedsContextSink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.RegisterDynamicProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Runtime::Remoting::Contexts::IDynamicProperty, System::ContextBoundObject, System::Runtime::Remoting::Contexts::Context)>(&System::Runtime::Remoting::Contexts::Context::RegisterDynamicProperty)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23305a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "RegisterDynamicProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::IDynamicProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ContextBoundObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.UnregisterDynamicProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, System::ContextBoundObject, System::Runtime::Remoting::Contexts::Context)>(&System::Runtime::Remoting::Contexts::Context::UnregisterDynamicProperty)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2330ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "UnregisterDynamicProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ContextBoundObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.GetDynamicPropertyCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Contexts::DynamicPropertyCollection (*)(System::ContextBoundObject, System::Runtime::Remoting::Contexts::Context)>(&System::Runtime::Remoting::Contexts::Context::GetDynamicPropertyCollection)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2330618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "GetDynamicPropertyCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ContextBoundObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.NotifyGlobalDynamicSinks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, System::Runtime::Remoting::Messaging::IMessage, bool, bool)>(&System::Runtime::Remoting::Contexts::Context::NotifyGlobalDynamicSinks)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2330d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "NotifyGlobalDynamicSinks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.get_HasGlobalDynamicSinks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Runtime::Remoting::Contexts::Context::get_HasGlobalDynamicSinks)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233149c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "get_HasGlobalDynamicSinks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.NotifyDynamicSinks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::Context::*)(bool, System::Runtime::Remoting::Messaging::IMessage, bool, bool)>(&System::Runtime::Remoting::Contexts::Context::NotifyDynamicSinks)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2331540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "NotifyDynamicSinks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.get_HasDynamicSinks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Contexts::Context::*)()>(&System::Runtime::Remoting::Contexts::Context::get_HasDynamicSinks)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23315c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "get_HasDynamicSinks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.get_HasExitSinks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Contexts::Context::*)()>(&System::Runtime::Remoting::Contexts::Context::get_HasExitSinks)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x232da94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "get_HasExitSinks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.GetProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Contexts::IContextProperty (System::Runtime::Remoting::Contexts::Context::*)(::StringW)>(&System::Runtime::Remoting::Contexts::Context::GetProperty)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2331604;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Contexts::Context),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.SetProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::Context::*)(System::Runtime::Remoting::Contexts::IContextProperty)>(&System::Runtime::Remoting::Contexts::Context::SetProperty)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x23317ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Contexts::Context),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.Freeze
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::Context::*)()>(&System::Runtime::Remoting::Contexts::Context::Freeze)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2331998;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Contexts::Context),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Contexts::Context::*)()>(&System::Runtime::Remoting::Contexts::Context::ToString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2331b44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Contexts::Context),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.GetServerContextSinkChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageSink (System::Runtime::Remoting::Contexts::Context::*)()>(&System::Runtime::Remoting::Contexts::Context::GetServerContextSinkChain)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2331ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "GetServerContextSinkChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.GetClientContextSinkChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageSink (System::Runtime::Remoting::Contexts::Context::*)()>(&System::Runtime::Remoting::Contexts::Context::GetClientContextSinkChain)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x232db4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "GetClientContextSinkChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.CreateServerObjectSinkChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageSink (System::Runtime::Remoting::Contexts::Context::*)(System::MarshalByRefObject, bool)>(&System::Runtime::Remoting::Contexts::Context::CreateServerObjectSinkChain)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x232769c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "CreateServerObjectSinkChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.CreateEnvoySink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageSink (System::Runtime::Remoting::Contexts::Context::*)(System::MarshalByRefObject)>(&System::Runtime::Remoting::Contexts::Context::CreateEnvoySink)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2327004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "CreateEnvoySink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.SwitchToContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Contexts::Context (*)(System::Runtime::Remoting::Contexts::Context)>(&System::Runtime::Remoting::Contexts::Context::SwitchToContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2331d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "SwitchToContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.CreateNewContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Contexts::Context (*)(System::Runtime::Remoting::Activation::IConstructionCallMessage)>(&System::Runtime::Remoting::Contexts::Context::CreateNewContext)> {
  constexpr static std::size_t size = 0x844;
  constexpr static std::size_t addrs = 0x2331d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "CreateNewContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.DoCallBack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::Context::*)(System::Runtime::Remoting::Contexts::CrossContextDelegate)>(&System::Runtime::Remoting::Contexts::Context::DoCallBack)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x23325d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "DoCallBack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::CrossContextDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.get_MyLocalStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::LocalDataStore (System::Runtime::Remoting::Contexts::Context::*)()>(&System::Runtime::Remoting::Contexts::Context::get_MyLocalStore)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2332758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "get_MyLocalStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.AllocateDataSlot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::LocalDataStoreSlot (*)()>(&System::Runtime::Remoting::Contexts::Context::AllocateDataSlot)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23328cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "AllocateDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.AllocateNamedDataSlot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::LocalDataStoreSlot (*)(::StringW)>(&System::Runtime::Remoting::Contexts::Context::AllocateNamedDataSlot)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2332930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "AllocateNamedDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.FreeNamedDataSlot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::Runtime::Remoting::Contexts::Context::FreeNamedDataSlot)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x233299c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "FreeNamedDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.GetNamedDataSlot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::LocalDataStoreSlot (*)(::StringW)>(&System::Runtime::Remoting::Contexts::Context::GetNamedDataSlot)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2332a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "GetNamedDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.GetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::LocalDataStoreSlot)>(&System::Runtime::Remoting::Contexts::Context::GetData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2332a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "GetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LocalDataStoreSlot>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::Context.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::LocalDataStoreSlot, ::bs_hook::Il2CppWrapperType)>(&System::Runtime::Remoting::Contexts::Context::SetData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2332aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LocalDataStoreSlot>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::Contexts::Context::__set_domain_id(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::Remoting::Contexts::Context::__get_domain_id() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_context_id(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::Remoting::Contexts::Context::__get_context_id() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_static_data(::cordl_internals::uintptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::uintptr_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::uintptr_t>(value));
}
constexpr ::cordl_internals::uintptr_t System::Runtime::Remoting::Contexts::Context::__get_static_data() const {
return ::cordl_internals::getInstanceField<::cordl_internals::uintptr_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_data(::cordl_internals::uintptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::uintptr_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::uintptr_t>(value));
}
constexpr ::cordl_internals::uintptr_t System::Runtime::Remoting::Contexts::Context::__get_data() const {
return ::cordl_internals::getInstanceField<::cordl_internals::uintptr_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Runtime::Remoting::Contexts::Context::__set_local_slots(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<::ArrayW<::bs_hook::Il2CppWrapperType>, "local_slots", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get>(std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::Runtime::Remoting::Contexts::Context::__get_local_slots()  {
return ::cordl_internals::getStaticField<::ArrayW<::bs_hook::Il2CppWrapperType>, "local_slots", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get>();
}
 void System::Runtime::Remoting::Contexts::Context::__set_default_server_context_sink(System::Runtime::Remoting::Messaging::IMessageSink value)  {
::cordl_internals::setStaticField<System::Runtime::Remoting::Messaging::IMessageSink, "default_server_context_sink", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get>(std::forward<System::Runtime::Remoting::Messaging::IMessageSink>(value));
}
 System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::Contexts::Context::__get_default_server_context_sink()  {
return ::cordl_internals::getStaticField<System::Runtime::Remoting::Messaging::IMessageSink, "default_server_context_sink", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get>();
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_server_context_sink_chain(System::Runtime::Remoting::Messaging::IMessageSink value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::Messaging::IMessageSink, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::Messaging::IMessageSink>(value));
}
constexpr System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::Contexts::Context::__get_server_context_sink_chain() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::Messaging::IMessageSink, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_client_context_sink_chain(System::Runtime::Remoting::Messaging::IMessageSink value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::Messaging::IMessageSink, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::Messaging::IMessageSink>(value));
}
constexpr System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::Contexts::Context::__get_client_context_sink_chain() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::Messaging::IMessageSink, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_context_properties(System::Collections::Generic::List_1<System::Runtime::Remoting::Contexts::IContextProperty> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::Runtime::Remoting::Contexts::IContextProperty>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::Runtime::Remoting::Contexts::IContextProperty>>(value));
}
constexpr System::Collections::Generic::List_1<System::Runtime::Remoting::Contexts::IContextProperty> System::Runtime::Remoting::Contexts::Context::__get_context_properties() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::Runtime::Remoting::Contexts::IContextProperty>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Runtime::Remoting::Contexts::Context::__set_global_count(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "global_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get>(std::forward<int32_t>(value));
}
 int32_t System::Runtime::Remoting::Contexts::Context::__get_global_count()  {
return ::cordl_internals::getStaticField<int32_t, "global_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get>();
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set__localDataStore(System::LocalDataStoreHolder value)  {
::cordl_internals::setInstanceField<System::LocalDataStoreHolder, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::LocalDataStoreHolder>(value));
}
constexpr System::LocalDataStoreHolder System::Runtime::Remoting::Contexts::Context::__get__localDataStore() const {
return ::cordl_internals::getInstanceField<System::LocalDataStoreHolder, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Runtime::Remoting::Contexts::Context::__set__localDataStoreMgr(System::LocalDataStoreMgr value)  {
::cordl_internals::setStaticField<System::LocalDataStoreMgr, "_localDataStoreMgr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get>(std::forward<System::LocalDataStoreMgr>(value));
}
 System::LocalDataStoreMgr System::Runtime::Remoting::Contexts::Context::__get__localDataStoreMgr()  {
return ::cordl_internals::getStaticField<System::LocalDataStoreMgr, "_localDataStoreMgr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get>();
}
 void System::Runtime::Remoting::Contexts::Context::__set_global_dynamic_properties(System::Runtime::Remoting::Contexts::DynamicPropertyCollection value)  {
::cordl_internals::setStaticField<System::Runtime::Remoting::Contexts::DynamicPropertyCollection, "global_dynamic_properties", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get>(std::forward<System::Runtime::Remoting::Contexts::DynamicPropertyCollection>(value));
}
 System::Runtime::Remoting::Contexts::DynamicPropertyCollection System::Runtime::Remoting::Contexts::Context::__get_global_dynamic_properties()  {
return ::cordl_internals::getStaticField<System::Runtime::Remoting::Contexts::DynamicPropertyCollection, "global_dynamic_properties", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get>();
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_context_dynamic_properties(System::Runtime::Remoting::Contexts::DynamicPropertyCollection value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::Contexts::DynamicPropertyCollection, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::Contexts::DynamicPropertyCollection>(value));
}
constexpr System::Runtime::Remoting::Contexts::DynamicPropertyCollection System::Runtime::Remoting::Contexts::Context::__get_context_dynamic_properties() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::Contexts::DynamicPropertyCollection, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_callback_object(System::Runtime::Remoting::Contexts::ContextCallbackObject value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::Contexts::ContextCallbackObject, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::Contexts::ContextCallbackObject>(value));
}
constexpr System::Runtime::Remoting::Contexts::ContextCallbackObject System::Runtime::Remoting::Contexts::Context::__get_callback_object() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::Contexts::ContextCallbackObject, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Runtime::Remoting::Contexts::Context::RegisterContext(System::Runtime::Remoting::Contexts::Context ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "RegisterContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ctx);
}
 void System::Runtime::Remoting::Contexts::Context::ReleaseContext(System::Runtime::Remoting::Contexts::Context ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "ReleaseContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ctx);
}
// Ctor Parameters []
 System::Runtime::Remoting::Contexts::Context::Context()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Context>())) {}
 void System::Runtime::Remoting::Contexts::Context::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Remoting::Contexts::Context::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Remoting::Contexts::Context System::Runtime::Remoting::Contexts::Context::get_DefaultContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "get_DefaultContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Contexts::Context, false>(nullptr, ___internal_method);
}
 int32_t System::Runtime::Remoting::Contexts::Context::get_ContextID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "get_ContextID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Runtime::Remoting::Contexts::IContextProperty> System::Runtime::Remoting::Contexts::Context::get_ContextProperties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "get_ContextProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Runtime::Remoting::Contexts::IContextProperty>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Runtime::Remoting::Contexts::Context::get_IsDefaultContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "get_IsDefaultContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Runtime::Remoting::Contexts::Context::get_NeedsContextSink()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "get_NeedsContextSink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Runtime::Remoting::Contexts::Context::RegisterDynamicProperty(System::Runtime::Remoting::Contexts::IDynamicProperty prop, System::ContextBoundObject obj, System::Runtime::Remoting::Contexts::Context ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "RegisterDynamicProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::IDynamicProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ContextBoundObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, prop, obj, ctx);
}
 bool System::Runtime::Remoting::Contexts::Context::UnregisterDynamicProperty(::StringW name, System::ContextBoundObject obj, System::Runtime::Remoting::Contexts::Context ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "UnregisterDynamicProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ContextBoundObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, name, obj, ctx);
}
 System::Runtime::Remoting::Contexts::DynamicPropertyCollection System::Runtime::Remoting::Contexts::Context::GetDynamicPropertyCollection(System::ContextBoundObject obj, System::Runtime::Remoting::Contexts::Context ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "GetDynamicPropertyCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ContextBoundObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Contexts::DynamicPropertyCollection, false>(nullptr, ___internal_method, obj, ctx);
}
 void System::Runtime::Remoting::Contexts::Context::NotifyGlobalDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage req_msg, bool client_site, bool async)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "NotifyGlobalDynamicSinks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, start, req_msg, client_site, async);
}
 bool System::Runtime::Remoting::Contexts::Context::get_HasGlobalDynamicSinks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "get_HasGlobalDynamicSinks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void System::Runtime::Remoting::Contexts::Context::NotifyDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage req_msg, bool client_site, bool async)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "NotifyDynamicSinks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, start, req_msg, client_site, async);
}
 bool System::Runtime::Remoting::Contexts::Context::get_HasDynamicSinks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "get_HasDynamicSinks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Runtime::Remoting::Contexts::Context::get_HasExitSinks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "get_HasExitSinks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Remoting::Contexts::IContextProperty System::Runtime::Remoting::Contexts::Context::GetProperty(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "GetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Contexts::IContextProperty, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void System::Runtime::Remoting::Contexts::Context::SetProperty(System::Runtime::Remoting::Contexts::IContextProperty prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "SetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::IContextProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prop);
}
 void System::Runtime::Remoting::Contexts::Context::Freeze()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "Freeze",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Runtime::Remoting::Contexts::Context::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::Contexts::Context::GetServerContextSinkChain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "GetServerContextSinkChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageSink, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::Contexts::Context::GetClientContextSinkChain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "GetClientContextSinkChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageSink, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::Contexts::Context::CreateServerObjectSinkChain(System::MarshalByRefObject obj, bool forceInternalExecute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "CreateServerObjectSinkChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageSink, false>(const_cast<void*>(instance), ___internal_method, obj, forceInternalExecute);
}
 System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::Contexts::Context::CreateEnvoySink(System::MarshalByRefObject serverObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "CreateEnvoySink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageSink, false>(const_cast<void*>(instance), ___internal_method, serverObject);
}
 System::Runtime::Remoting::Contexts::Context System::Runtime::Remoting::Contexts::Context::SwitchToContext(System::Runtime::Remoting::Contexts::Context newContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "SwitchToContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Contexts::Context, false>(nullptr, ___internal_method, newContext);
}
 System::Runtime::Remoting::Contexts::Context System::Runtime::Remoting::Contexts::Context::CreateNewContext(System::Runtime::Remoting::Activation::IConstructionCallMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "CreateNewContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Contexts::Context, false>(nullptr, ___internal_method, msg);
}
 void System::Runtime::Remoting::Contexts::Context::DoCallBack(System::Runtime::Remoting::Contexts::CrossContextDelegate deleg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "DoCallBack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::CrossContextDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deleg);
}
 System::LocalDataStore System::Runtime::Remoting::Contexts::Context::get_MyLocalStore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "get_MyLocalStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::LocalDataStore, false>(const_cast<void*>(instance), ___internal_method);
}
 System::LocalDataStoreSlot System::Runtime::Remoting::Contexts::Context::AllocateDataSlot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "AllocateDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::LocalDataStoreSlot, false>(nullptr, ___internal_method);
}
 System::LocalDataStoreSlot System::Runtime::Remoting::Contexts::Context::AllocateNamedDataSlot(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "AllocateNamedDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::LocalDataStoreSlot, false>(nullptr, ___internal_method, name);
}
 void System::Runtime::Remoting::Contexts::Context::FreeNamedDataSlot(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "FreeNamedDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name);
}
 System::LocalDataStoreSlot System::Runtime::Remoting::Contexts::Context::GetNamedDataSlot(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "GetNamedDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::LocalDataStoreSlot, false>(nullptr, ___internal_method, name);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::Contexts::Context::GetData(System::LocalDataStoreSlot slot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "GetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LocalDataStoreSlot>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, slot);
}
 void System::Runtime::Remoting::Contexts::Context::SetData(System::LocalDataStoreSlot slot, ::bs_hook::Il2CppWrapperType data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::Context>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LocalDataStoreSlot>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, slot, data);
}
