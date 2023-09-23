#pragma once
#include "System/Diagnostics/zzzz__CorrelationManager_def.hpp"
#include "System/Collections/zzzz__Stack_def.hpp"
//  Writing Method size for method: System::Diagnostics::CorrelationManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::CorrelationManager::*)()>(&System::Diagnostics::CorrelationManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27d99f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::CorrelationManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::CorrelationManager.get_LogicalOperationStack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Stack (System::Diagnostics::CorrelationManager::*)()>(&System::Diagnostics::CorrelationManager::get_LogicalOperationStack)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27d99f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::CorrelationManager>::get(),
                            "get_LogicalOperationStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::CorrelationManager.GetLogicalOperationStack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Stack (System::Diagnostics::CorrelationManager::*)()>(&System::Diagnostics::CorrelationManager::GetLogicalOperationStack)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x27d99fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::CorrelationManager>::get(),
                            "GetLogicalOperationStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::Diagnostics::CorrelationManager::CorrelationManager()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CorrelationManager>())) {}
 void System::Diagnostics::CorrelationManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::CorrelationManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Stack System::Diagnostics::CorrelationManager::get_LogicalOperationStack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::CorrelationManager>::get(),
                            "get_LogicalOperationStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Stack, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Stack System::Diagnostics::CorrelationManager::GetLogicalOperationStack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::CorrelationManager>::get(),
                            "GetLogicalOperationStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Stack, false>(const_cast<void*>(instance), ___internal_method);
}
