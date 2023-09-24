#pragma once
#include "System/zzzz__LazyHelper_def.hpp"
#include "System/zzzz__LazyState_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/zzzz__LazyThreadSafetyMode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: System::LazyHelper.get_State
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::LazyState (System::LazyHelper::*)()>(&System::LazyHelper::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2440978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get(),
                            "get_State",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::LazyHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LazyHelper::*)(System::LazyState)>(&System::LazyHelper::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2440980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LazyState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::LazyHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LazyHelper::*)(System::Threading::LazyThreadSafetyMode, System::Exception)>(&System::LazyHelper::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24409a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::LazyThreadSafetyMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::LazyHelper.ThrowException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LazyHelper::*)()>(&System::LazyHelper::ThrowException)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24409f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get(),
                            "ThrowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::LazyHelper.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::LazyHelper (*)(System::Threading::LazyThreadSafetyMode, bool)>(&System::LazyHelper::Create)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2440a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::LazyThreadSafetyMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::LazyHelper.CreateViaDefaultConstructor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Type)>(&System::LazyHelper::CreateViaDefaultConstructor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2440b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get(),
                            "CreateViaDefaultConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::LazyHelper::__set_NoneViaConstructor(System::LazyHelper value)  {
::cordl_internals::setStaticField<System::LazyHelper, "NoneViaConstructor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get>(std::forward<System::LazyHelper>(value));
}
 System::LazyHelper System::LazyHelper::__get_NoneViaConstructor()  {
return ::cordl_internals::getStaticField<System::LazyHelper, "NoneViaConstructor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get>();
}
 void System::LazyHelper::__set_NoneViaFactory(System::LazyHelper value)  {
::cordl_internals::setStaticField<System::LazyHelper, "NoneViaFactory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get>(std::forward<System::LazyHelper>(value));
}
 System::LazyHelper System::LazyHelper::__get_NoneViaFactory()  {
return ::cordl_internals::getStaticField<System::LazyHelper, "NoneViaFactory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get>();
}
 void System::LazyHelper::__set_PublicationOnlyViaConstructor(System::LazyHelper value)  {
::cordl_internals::setStaticField<System::LazyHelper, "PublicationOnlyViaConstructor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get>(std::forward<System::LazyHelper>(value));
}
 System::LazyHelper System::LazyHelper::__get_PublicationOnlyViaConstructor()  {
return ::cordl_internals::getStaticField<System::LazyHelper, "PublicationOnlyViaConstructor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get>();
}
 void System::LazyHelper::__set_PublicationOnlyViaFactory(System::LazyHelper value)  {
::cordl_internals::setStaticField<System::LazyHelper, "PublicationOnlyViaFactory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get>(std::forward<System::LazyHelper>(value));
}
 System::LazyHelper System::LazyHelper::__get_PublicationOnlyViaFactory()  {
return ::cordl_internals::getStaticField<System::LazyHelper, "PublicationOnlyViaFactory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get>();
}
 void System::LazyHelper::__set_PublicationOnlyWaitForOtherThreadToPublish(System::LazyHelper value)  {
::cordl_internals::setStaticField<System::LazyHelper, "PublicationOnlyWaitForOtherThreadToPublish", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get>(std::forward<System::LazyHelper>(value));
}
 System::LazyHelper System::LazyHelper::__get_PublicationOnlyWaitForOtherThreadToPublish()  {
return ::cordl_internals::getStaticField<System::LazyHelper, "PublicationOnlyWaitForOtherThreadToPublish", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get>();
}
constexpr void System::LazyHelper::__set__State_k__BackingField(System::LazyState value)  {
::cordl_internals::setInstanceField<System::LazyState, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::LazyState>(value));
}
constexpr System::LazyState System::LazyHelper::__get__State_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::LazyState, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::LazyHelper::__set__exceptionDispatch(System::Runtime::ExceptionServices::ExceptionDispatchInfo value)  {
::cordl_internals::setInstanceField<System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::ExceptionServices::ExceptionDispatchInfo>(value));
}
constexpr System::Runtime::ExceptionServices::ExceptionDispatchInfo System::LazyHelper::__get__exceptionDispatch() const {
return ::cordl_internals::getInstanceField<System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::LazyState System::LazyHelper::get_State()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get(),
                            "get_State",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::LazyState, false>(const_cast<void*>(instance), ___internal_method);
}
 System::LazyHelper System::LazyHelper::New_ctor(System::LazyState state)  {
System::LazyHelper o{THROW_UNLESS(::il2cpp_utils::New<System::LazyHelper>(state))};
return o;
}
 void System::LazyHelper::_ctor(System::LazyState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LazyState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 System::LazyHelper System::LazyHelper::New_ctor(System::Threading::LazyThreadSafetyMode mode, System::Exception exception)  {
System::LazyHelper o{THROW_UNLESS(::il2cpp_utils::New<System::LazyHelper>(mode, exception))};
return o;
}
 void System::LazyHelper::_ctor(System::Threading::LazyThreadSafetyMode mode, System::Exception exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::LazyThreadSafetyMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mode, exception);
}
 void System::LazyHelper::ThrowException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get(),
                            "ThrowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::LazyHelper System::LazyHelper::Create(System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::LazyThreadSafetyMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::LazyHelper, false>(nullptr, ___internal_method, mode, useDefaultConstructor);
}
 ::bs_hook::Il2CppWrapperType System::LazyHelper::CreateViaDefaultConstructor(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LazyHelper>::get(),
                            "CreateViaDefaultConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, type);
}
