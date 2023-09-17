#pragma once
namespace {
#include "System/Runtime/Remoting/Messaging/zzzz__CADMessageBase_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADArgHolder_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(::System::Runtime::Remoting::Messaging::IMethodMessage)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x233c32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.GetMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase (::System::Runtime::Remoting::Messaging::CADMessageBase::*)()>(&::System::Runtime::Remoting::Messaging::CADMessageBase::GetMethod)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x233c3c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "GetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.GetSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type> (*)(::System::Reflection::MethodBase, bool)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::GetSignature)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x233c440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "GetSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.MarshalProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Collections::IDictionary, ByRef<::System::Collections::ArrayList>)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::MarshalProperties)> {
  constexpr static std::size_t size = 0x764;
  constexpr static std::size_t addrs = 0x233c5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "MarshalProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::ArrayList>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.UnmarshalProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::IDictionary, int32_t, ::System::Collections::ArrayList)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalProperties)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x233ced8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "UnmarshalProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.IsPossibleToIgnoreMarshal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::bs_hook::Il2CppWrapperType)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::IsPossibleToIgnoreMarshal)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x233d014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "IsPossibleToIgnoreMarshal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.MarshalArgument
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(::bs_hook::Il2CppWrapperType, ByRef<::System::Collections::ArrayList>)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArgument)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x233d1c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "MarshalArgument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::ArrayList>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.UnmarshalArgument
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(::bs_hook::Il2CppWrapperType, ::System::Collections::ArrayList)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArgument)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x233d388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "UnmarshalArgument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.MarshalArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(::ArrayW<::bs_hook::Il2CppWrapperType>, ByRef<::System::Collections::ArrayList>)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArguments)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x233dab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "MarshalArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::ArrayList>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.UnmarshalArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(::ArrayW<::bs_hook::Il2CppWrapperType>, ::System::Collections::ArrayList)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArguments)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x233dbb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "UnmarshalArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.SaveLogicalCallContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(::System::Runtime::Remoting::Messaging::IMethodMessage, ByRef<::System::Collections::ArrayList>)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::SaveLogicalCallContext)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x233dcb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "SaveLogicalCallContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::ArrayList>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.GetLogicalCallContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(::System::Collections::ArrayList)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::GetLogicalCallContext)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x233def0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "GetLogicalCallContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::Remoting::Messaging::CADMessageBase::__set__args(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Runtime::Remoting::Messaging::CADMessageBase::__get__args() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::CADMessageBase::__set__serializedArgs(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Runtime::Remoting::Messaging::CADMessageBase::__get__serializedArgs() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::CADMessageBase::__set__propertyCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::Remoting::Messaging::CADMessageBase::__get__propertyCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::CADMessageBase::__set__callContext(::System::Runtime::Remoting::Messaging::CADArgHolder value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::CADArgHolder, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Messaging::CADArgHolder>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::CADArgHolder ::System::Runtime::Remoting::Messaging::CADMessageBase::__get__callContext() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::CADArgHolder, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::CADMessageBase::__set_serializedMethod(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Runtime::Remoting::Messaging::CADMessageBase::__get_serializedMethod() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "msg", ty: "::System::Runtime::Remoting::Messaging::IMethodMessage", modifiers: "", def_value: None }]
 ::System::Runtime::Remoting::Messaging::CADMessageBase::CADMessageBase(::System::Runtime::Remoting::Messaging::IMethodMessage msg)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CADMessageBase>(msg))) {}
 void ::System::Runtime::Remoting::Messaging::CADMessageBase::_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 ::System::Reflection::MethodBase ::System::Runtime::Remoting::Messaging::CADMessageBase::GetMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "GetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::System::Type> ::System::Runtime::Remoting::Messaging::CADMessageBase::GetSignature(::System::Reflection::MethodBase methodBase, bool load)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "GetSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type>, false>(nullptr, ___internal_method, methodBase, load);
}
 int32_t ::System::Runtime::Remoting::Messaging::CADMessageBase::MarshalProperties(::System::Collections::IDictionary dict, ByRef<::System::Collections::ArrayList> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "MarshalProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::ArrayList>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, dict, args);
}
 void ::System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalProperties(::System::Collections::IDictionary dict, int32_t count, ::System::Collections::ArrayList args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "UnmarshalProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dict, count, args);
}
 bool ::System::Runtime::Remoting::Messaging::CADMessageBase::IsPossibleToIgnoreMarshal(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "IsPossibleToIgnoreMarshal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj);
}
 ::bs_hook::Il2CppWrapperType ::System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArgument(::bs_hook::Il2CppWrapperType arg, ByRef<::System::Collections::ArrayList> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "MarshalArgument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::ArrayList>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, arg, args);
}
 ::bs_hook::Il2CppWrapperType ::System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArgument(::bs_hook::Il2CppWrapperType arg, ::System::Collections::ArrayList args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "UnmarshalArgument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, arg, args);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArguments(::ArrayW<::bs_hook::Il2CppWrapperType> arguments, ByRef<::System::Collections::ArrayList> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "MarshalArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::ArrayList>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, arguments, args);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArguments(::ArrayW<::bs_hook::Il2CppWrapperType> arguments, ::System::Collections::ArrayList args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "UnmarshalArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, arguments, args);
}
 void ::System::Runtime::Remoting::Messaging::CADMessageBase::SaveLogicalCallContext(::System::Runtime::Remoting::Messaging::IMethodMessage msg, ByRef<::System::Collections::ArrayList> serializeList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "SaveLogicalCallContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::ArrayList>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg, serializeList);
}
 ::System::Runtime::Remoting::Messaging::LogicalCallContext ::System::Runtime::Remoting::Messaging::CADMessageBase::GetLogicalCallContext(::System::Collections::ArrayList args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMessageBase>::get(),
                            "GetLogicalCallContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::LogicalCallContext, false>(const_cast<void*>(instance), ___internal_method, args);
}
} // end anonymous namespace
