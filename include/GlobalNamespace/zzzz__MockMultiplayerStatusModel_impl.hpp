#pragma once
namespace {
#include "GlobalNamespace/zzzz__MockMultiplayerStatusModel_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerStatusModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockMultiplayerStatusModel.GetMultiplayerStatusAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData> (::GlobalNamespace::MockMultiplayerStatusModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::MockMultiplayerStatusModel::GetMultiplayerStatusAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x20eb4c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockMultiplayerStatusModel>::get(),
                            "GetMultiplayerStatusAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockMultiplayerStatusModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockMultiplayerStatusModel::*)()>(&::GlobalNamespace::MockMultiplayerStatusModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20eb534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockMultiplayerStatusModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IMultiplayerStatusModel
constexpr  ::GlobalNamespace::MockMultiplayerStatusModel::operator ::GlobalNamespace::IMultiplayerStatusModel() const noexcept {
return ::GlobalNamespace::IMultiplayerStatusModel(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MockMultiplayerStatusModel::__set__multiplayerStatusData(::GlobalNamespace::MultiplayerStatusData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerStatusData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerStatusData>(value));
}
constexpr ::GlobalNamespace::MultiplayerStatusData ::GlobalNamespace::MockMultiplayerStatusModel::__get__multiplayerStatusData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerStatusData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData> ::GlobalNamespace::MockMultiplayerStatusModel::GetMultiplayerStatusAsync(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockMultiplayerStatusModel>::get(),
                            "GetMultiplayerStatusAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
// Ctor Parameters []
 ::GlobalNamespace::MockMultiplayerStatusModel::MockMultiplayerStatusModel()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MockMultiplayerStatusModel>())) {}
 void ::GlobalNamespace::MockMultiplayerStatusModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockMultiplayerStatusModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
