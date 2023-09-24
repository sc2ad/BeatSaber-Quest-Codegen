#pragma once
#include "System/IO/Enumeration/zzzz__FileSystemEnumerator_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerable_1_def.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEntry_def.hpp"
 System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> o{THROW_UNLESS(::il2cpp_utils::New<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>>(object, method))};
return o;
}
 void System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>::Invoke(ByRef<System::IO::Enumeration::FileSystemEntry> entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::IO::Enumeration::FileSystemEntry>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, entry);
}
 System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult> System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult> o{THROW_UNLESS(::il2cpp_utils::New<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult>>(object, method))};
return o;
}
 void System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 TResult System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult>::Invoke(ByRef<System::IO::Enumeration::FileSystemEntry> entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::IO::Enumeration::FileSystemEntry>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TResult, false>(const_cast<void*>(instance), ___internal_method, entry);
}
constexpr void System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>::__set__enumerable(System::IO::Enumeration::FileSystemEnumerable_1<TResult> value)  {
::cordl_internals::setInstanceField<System::IO::Enumeration::FileSystemEnumerable_1<TResult>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Enumeration::FileSystemEnumerable_1<TResult>>(value));
}
constexpr System::IO::Enumeration::FileSystemEnumerable_1<TResult> System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>::__get__enumerable() const {
return ::cordl_internals::getInstanceField<System::IO::Enumeration::FileSystemEnumerable_1<TResult>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult> System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>::New_ctor(System::IO::Enumeration::FileSystemEnumerable_1<TResult> enumerable)  {
System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult> o{THROW_UNLESS(::il2cpp_utils::New<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>>(enumerable))};
return o;
}
 void System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>::_ctor(System::IO::Enumeration::FileSystemEnumerable_1<TResult> enumerable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Enumeration::FileSystemEnumerable_1<TResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, enumerable);
}
 TResult System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>::TransformEntry(ByRef<System::IO::Enumeration::FileSystemEntry> entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>>::get(),
                            "TransformEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::IO::Enumeration::FileSystemEntry>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TResult, false>(const_cast<void*>(instance), ___internal_method, entry);
}
 bool System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>::ShouldRecurseIntoEntry(ByRef<System::IO::Enumeration::FileSystemEntry> entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>>::get(),
                            "ShouldRecurseIntoEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::IO::Enumeration::FileSystemEntry>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, entry);
}
 bool System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>::ShouldIncludeEntry(ByRef<System::IO::Enumeration::FileSystemEntry> entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>>::get(),
                            "ShouldIncludeEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::IO::Enumeration::FileSystemEntry>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, entry);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TResult>
constexpr  System::IO::Enumeration::FileSystemEnumerable_1<TResult>::operator System::Collections::Generic::IEnumerable_1<TResult>() const noexcept {
return System::Collections::Generic::IEnumerable_1<TResult>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::IO::Enumeration::FileSystemEnumerable_1<TResult>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__set__enumerator(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult> value)  {
::cordl_internals::setInstanceField<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>>(value));
}
constexpr System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult> System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__enumerator() const {
return ::cordl_internals::getInstanceField<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__set__transform(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult> value)  {
::cordl_internals::setInstanceField<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult>>(value));
}
constexpr System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult> System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__transform() const {
return ::cordl_internals::getInstanceField<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__set__options(System::IO::EnumerationOptions value)  {
::cordl_internals::setInstanceField<System::IO::EnumerationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::EnumerationOptions>(value));
}
constexpr System::IO::EnumerationOptions System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__options() const {
return ::cordl_internals::getInstanceField<System::IO::EnumerationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__set__directory(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__directory() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__set__ShouldIncludePredicate_k__BackingField(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> value)  {
::cordl_internals::setInstanceField<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>>(value));
}
constexpr System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__ShouldIncludePredicate_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__set__ShouldRecursePredicate_k__BackingField(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> value)  {
::cordl_internals::setInstanceField<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>>(value));
}
constexpr System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__ShouldRecursePredicate_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
/// @param options: System::IO::EnumerationOptions (default: csnull)
 System::IO::Enumeration::FileSystemEnumerable_1<TResult> System::IO::Enumeration::FileSystemEnumerable_1<TResult>::New_ctor(::StringW directory, System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult> transform, System::IO::EnumerationOptions options)  {
System::IO::Enumeration::FileSystemEnumerable_1<TResult> o{THROW_UNLESS(::il2cpp_utils::New<System::IO::Enumeration::FileSystemEnumerable_1<TResult>>(directory, transform, options))};
return o;
}
/// @param options: System::IO::EnumerationOptions (default: csnull)
 void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::_ctor(::StringW directory, System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult> transform, System::IO::EnumerationOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Enumeration::FileSystemEnumerable_1<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::EnumerationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, directory, transform, options);
}
 System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> System::IO::Enumeration::FileSystemEnumerable_1<TResult>::get_ShouldIncludePredicate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Enumeration::FileSystemEnumerable_1<TResult>>::get(),
                            "get_ShouldIncludePredicate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::set_ShouldIncludePredicate(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Enumeration::FileSystemEnumerable_1<TResult>>::get(),
                            "set_ShouldIncludePredicate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> System::IO::Enumeration::FileSystemEnumerable_1<TResult>::get_ShouldRecursePredicate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Enumeration::FileSystemEnumerable_1<TResult>>::get(),
                            "get_ShouldRecursePredicate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<TResult> System::IO::Enumeration::FileSystemEnumerable_1<TResult>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Enumeration::FileSystemEnumerable_1<TResult>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<TResult>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator System::IO::Enumeration::FileSystemEnumerable_1<TResult>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::Enumeration::FileSystemEnumerable_1<TResult>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
