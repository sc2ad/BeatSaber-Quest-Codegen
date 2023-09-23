#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Threading/zzzz__ExecutionContextSwitcher_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
//  Writing Method size for method: System::Threading::ExecutionContextSwitcher.UndoNoThrow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ExecutionContextSwitcher::*)()>(&System::Threading::ExecutionContextSwitcher::UndoNoThrow)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x24a9754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ExecutionContextSwitcher>::get(),
                            "UndoNoThrow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::ExecutionContextSwitcher.Undo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ExecutionContextSwitcher::*)()>(&System::Threading::ExecutionContextSwitcher::Undo)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x24a97dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ExecutionContextSwitcher>::get(),
                            "Undo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "outerEC", ty: "System::Threading::System__Threading__ExecutionContext__Reader", modifiers: "", def_value: Some("{}") }, CppParam { name: "outerECBelongsToScope", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hecsw", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "thread", ty: "System::Threading::Thread", modifiers: "", def_value: Some("csnull") }]
constexpr System::Threading::ExecutionContextSwitcher::ExecutionContextSwitcher(System::Threading::System__Threading__ExecutionContext__Reader outerEC, bool outerECBelongsToScope, ::bs_hook::Il2CppWrapperType hecsw, System::Threading::Thread thread) noexcept : ::bs_hook::ValueTypeWrapper() {this->outerEC = outerEC;
this->outerECBelongsToScope = outerECBelongsToScope;
this->hecsw = hecsw;
this->thread = thread;
}
constexpr void System::Threading::ExecutionContextSwitcher::__set_outerEC(System::Threading::System__Threading__ExecutionContext__Reader value)  {
::cordl_internals::setInstanceField<System::Threading::System__Threading__ExecutionContext__Reader, 0x0>(this->__instance, std::forward<System::Threading::System__Threading__ExecutionContext__Reader>(value));
}
constexpr System::Threading::System__Threading__ExecutionContext__Reader System::Threading::ExecutionContextSwitcher::__get_outerEC() const {
return ::cordl_internals::getInstanceField<System::Threading::System__Threading__ExecutionContext__Reader, 0x0>(this->__instance);
}
constexpr void System::Threading::ExecutionContextSwitcher::__set_outerECBelongsToScope(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Threading::ExecutionContextSwitcher::__get_outerECBelongsToScope() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
constexpr void System::Threading::ExecutionContextSwitcher::__set_hecsw(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Threading::ExecutionContextSwitcher::__get_hecsw() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->__instance);
}
constexpr void System::Threading::ExecutionContextSwitcher::__set_thread(System::Threading::Thread value)  {
::cordl_internals::setInstanceField<System::Threading::Thread, 0x18>(this->__instance, std::forward<System::Threading::Thread>(value));
}
constexpr System::Threading::Thread System::Threading::ExecutionContextSwitcher::__get_thread() const {
return ::cordl_internals::getInstanceField<System::Threading::Thread, 0x18>(this->__instance);
}
 bool System::Threading::ExecutionContextSwitcher::UndoNoThrow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ExecutionContextSwitcher>::get(),
                            "UndoNoThrow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Threading::ExecutionContextSwitcher::Undo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ExecutionContextSwitcher>::get(),
                            "Undo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
