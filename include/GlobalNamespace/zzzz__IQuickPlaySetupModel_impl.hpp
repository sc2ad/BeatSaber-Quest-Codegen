#pragma once
namespace {
#include "GlobalNamespace/zzzz__IQuickPlaySetupModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IQuickPlaySetupModel.GetQuickPlaySetupAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData> (::GlobalNamespace::IQuickPlaySetupModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::IQuickPlaySetupModel::GetQuickPlaySetupAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IQuickPlaySetupModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IQuickPlaySetupModel>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData> ::GlobalNamespace::IQuickPlaySetupModel::GetQuickPlaySetupAsync(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IQuickPlaySetupModel>::get(),
                            "GetQuickPlaySetupAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
} // end anonymous namespace
