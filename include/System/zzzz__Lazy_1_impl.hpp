#pragma once
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/zzzz__LazyHelper_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Threading/zzzz__LazyThreadSafetyMode_def.hpp"
constexpr void System::Lazy_1<T>::__set__state(System::LazyHelper value)  {
::cordl_internals::setInstanceField<System::LazyHelper, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::LazyHelper>(value));
}
constexpr System::LazyHelper System::Lazy_1<T>::__get__state() const {
return ::cordl_internals::getInstanceField<System::LazyHelper, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Lazy_1<T>::__set__factory(System::Func_1<T> value)  {
::cordl_internals::setInstanceField<System::Func_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<T>>(value));
}
constexpr System::Func_1<T> System::Lazy_1<T>::__get__factory() const {
return ::cordl_internals::getInstanceField<System::Func_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Lazy_1<T>::__set__value(T value)  {
::cordl_internals::setInstanceField<T, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T System::Lazy_1<T>::__get__value() const {
return ::cordl_internals::getInstanceField<T, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 T System::Lazy_1<T>::CreateViaDefaultConstructor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Lazy_1<T>>::get(),
                            "CreateViaDefaultConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
 System::Lazy_1<T> System::Lazy_1<T>::New_ctor()  {
System::Lazy_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Lazy_1<T>>())};
return o;
}
 void System::Lazy_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Lazy_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Lazy_1<T> System::Lazy_1<T>::New_ctor(System::Func_1<T> valueFactory)  {
System::Lazy_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Lazy_1<T>>(valueFactory))};
return o;
}
 void System::Lazy_1<T>::_ctor(System::Func_1<T> valueFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Lazy_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, valueFactory);
}
 System::Lazy_1<T> System::Lazy_1<T>::New_ctor(System::Func_1<T> valueFactory, System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor)  {
System::Lazy_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Lazy_1<T>>(valueFactory, mode, useDefaultConstructor))};
return o;
}
 void System::Lazy_1<T>::_ctor(System::Func_1<T> valueFactory, System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Lazy_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::LazyThreadSafetyMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, valueFactory, mode, useDefaultConstructor);
}
 void System::Lazy_1<T>::ViaConstructor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Lazy_1<T>>::get(),
                            "ViaConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Lazy_1<T>::ViaFactory(System::Threading::LazyThreadSafetyMode mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Lazy_1<T>>::get(),
                            "ViaFactory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::LazyThreadSafetyMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mode);
}
 void System::Lazy_1<T>::ExecutionAndPublication(System::LazyHelper executionAndPublication, bool useDefaultConstructor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Lazy_1<T>>::get(),
                            "ExecutionAndPublication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LazyHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, executionAndPublication, useDefaultConstructor);
}
 void System::Lazy_1<T>::PublicationOnly(System::LazyHelper publicationOnly, T possibleValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Lazy_1<T>>::get(),
                            "PublicationOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LazyHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicationOnly, possibleValue);
}
 void System::Lazy_1<T>::PublicationOnlyViaConstructor(System::LazyHelper initializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Lazy_1<T>>::get(),
                            "PublicationOnlyViaConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LazyHelper>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initializer);
}
 void System::Lazy_1<T>::PublicationOnlyViaFactory(System::LazyHelper initializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Lazy_1<T>>::get(),
                            "PublicationOnlyViaFactory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LazyHelper>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initializer);
}
 void System::Lazy_1<T>::PublicationOnlyWaitForOtherThreadToPublish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Lazy_1<T>>::get(),
                            "PublicationOnlyWaitForOtherThreadToPublish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 T System::Lazy_1<T>::CreateValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Lazy_1<T>>::get(),
                            "CreateValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Lazy_1<T>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Lazy_1<T>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Lazy_1<T>::get_IsValueCreated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Lazy_1<T>>::get(),
                            "get_IsValueCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 T System::Lazy_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Lazy_1<T>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
