#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Collections/Generic/zzzz__ValueListBuilder_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
// Ctor Parameters [CppParam { name: "_span", ty: "System::Span_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_arrayFromPool", ty: "::ArrayW<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::ValueListBuilder_1<T>::ValueListBuilder_1(System::Span_1<T> _span, ::ArrayW<T> _arrayFromPool, int32_t _pos) noexcept : ::bs_hook::ValueTypeWrapper() {this->_span = _span;
this->_arrayFromPool = _arrayFromPool;
this->_pos = _pos;
}
constexpr void System::Collections::Generic::ValueListBuilder_1<T>::__set__span(System::Span_1<T> value)  {
::cordl_internals::setInstanceField<System::Span_1<T>, 0x0>(this->__instance, std::forward<System::Span_1<T>>(value));
}
constexpr System::Span_1<T> System::Collections::Generic::ValueListBuilder_1<T>::__get__span() const {
return ::cordl_internals::getInstanceField<System::Span_1<T>, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::ValueListBuilder_1<T>::__set__arrayFromPool(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x8>(this->__instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> System::Collections::Generic::ValueListBuilder_1<T>::__get__arrayFromPool() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x8>(this->__instance);
}
constexpr void System::Collections::Generic::ValueListBuilder_1<T>::__set__pos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::ValueListBuilder_1<T>::__get__pos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
 void System::Collections::Generic::ValueListBuilder_1<T>::_ctor(System::Span_1<T> initialSpan)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, initialSpan);
}
 int32_t System::Collections::Generic::ValueListBuilder_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ByRef<T> System::Collections::Generic::ValueListBuilder_1<T>::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<ByRef<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 void System::Collections::Generic::ValueListBuilder_1<T>::Append(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item);
}
 System::ReadOnlySpan_1<T> System::Collections::Generic::ValueListBuilder_1<T>::AsSpan()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                            "AsSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ReadOnlySpan_1<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Collections::Generic::ValueListBuilder_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Collections::Generic::ValueListBuilder_1<T>::Grow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                            "Grow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 T System::Collections::Generic::ValueListBuilder_1<T>::Pop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                            "Pop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "_span", ty: "System::Span_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_arrayFromPool", ty: "::ArrayW<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::ValueListBuilder_1<T>::ValueListBuilder_1(System::Span_1<T> _span, ::ArrayW<T> _arrayFromPool, int32_t _pos) noexcept : ::bs_hook::ValueTypeWrapper() {this->_span = _span;
this->_arrayFromPool = _arrayFromPool;
this->_pos = _pos;
}
constexpr void System::Collections::Generic::ValueListBuilder_1<T>::__set__span(System::Span_1<T> value)  {
::cordl_internals::setInstanceField<System::Span_1<T>, 0x0>(this->__instance, std::forward<System::Span_1<T>>(value));
}
constexpr System::Span_1<T> System::Collections::Generic::ValueListBuilder_1<T>::__get__span() const {
return ::cordl_internals::getInstanceField<System::Span_1<T>, 0x0>(this->__instance);
}
constexpr void System::Collections::Generic::ValueListBuilder_1<T>::__set__arrayFromPool(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x8>(this->__instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> System::Collections::Generic::ValueListBuilder_1<T>::__get__arrayFromPool() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x8>(this->__instance);
}
constexpr void System::Collections::Generic::ValueListBuilder_1<T>::__set__pos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Generic::ValueListBuilder_1<T>::__get__pos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
 void System::Collections::Generic::ValueListBuilder_1<T>::_ctor(System::Span_1<T> initialSpan)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, initialSpan);
}
 int32_t System::Collections::Generic::ValueListBuilder_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ByRef<T> System::Collections::Generic::ValueListBuilder_1<T>::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<ByRef<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 void System::Collections::Generic::ValueListBuilder_1<T>::Append(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item);
}
 System::ReadOnlySpan_1<T> System::Collections::Generic::ValueListBuilder_1<T>::AsSpan()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                            "AsSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ReadOnlySpan_1<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Collections::Generic::ValueListBuilder_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Collections::Generic::ValueListBuilder_1<T>::Grow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                            "Grow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 T System::Collections::Generic::ValueListBuilder_1<T>::Pop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ValueListBuilder_1<T>>::get(),
                            "Pop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
