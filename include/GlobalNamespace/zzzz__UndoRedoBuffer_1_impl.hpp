#pragma once
#include "GlobalNamespace/zzzz__UndoRedoBuffer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
constexpr void GlobalNamespace::UndoRedoBuffer_1<T>::__set__data(System::Collections::Generic::List_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<T>>(value));
}
constexpr System::Collections::Generic::List_1<T> GlobalNamespace::UndoRedoBuffer_1<T>::__get__data() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UndoRedoBuffer_1<T>::__set__capacity(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::UndoRedoBuffer_1<T>::__get__capacity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UndoRedoBuffer_1<T>::__set__cursor(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::UndoRedoBuffer_1<T>::__get__cursor() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::UndoRedoBuffer_1<T> GlobalNamespace::UndoRedoBuffer_1<T>::New_ctor(int32_t capacity)  {
GlobalNamespace::UndoRedoBuffer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::UndoRedoBuffer_1<T>>(capacity))};
return o;
}
 void GlobalNamespace::UndoRedoBuffer_1<T>::_ctor(int32_t capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UndoRedoBuffer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, capacity);
}
 void GlobalNamespace::UndoRedoBuffer_1<T>::Add(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UndoRedoBuffer_1<T>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 T GlobalNamespace::UndoRedoBuffer_1<T>::Undo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UndoRedoBuffer_1<T>>::get(),
                            "Undo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 T GlobalNamespace::UndoRedoBuffer_1<T>::Redo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UndoRedoBuffer_1<T>>::get(),
                            "Redo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UndoRedoBuffer_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UndoRedoBuffer_1<T>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
