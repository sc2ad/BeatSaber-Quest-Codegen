#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupModel_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupData_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IQuickPlaySetupModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/zzzz__UriBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB::*)()>(&GlobalNamespace::GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f2408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB::__set_data(::ArrayW<GlobalNamespace::QuickPlaySetupData> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::QuickPlaySetupData>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::QuickPlaySetupData>>(value));
}
constexpr ::ArrayW<GlobalNamespace::QuickPlaySetupData> GlobalNamespace::GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB::__get_data() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::QuickPlaySetupData>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB GlobalNamespace::GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB::New_ctor()  {
GlobalNamespace::GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::*)()>(&GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x7fc;
  constexpr static std::size_t addrs = 0x21f2410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21f2c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::QuickPlaySetupData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::QuickPlaySetupModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_uriBuilder_5__2", ty: "System::UriBuilder", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::QuickPlaySetupData> __t__builder, GlobalNamespace::QuickPlaySetupModel __4__this, System::UriBuilder _uriBuilder_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_uriBuilder_5__2 = _uriBuilder_5__2;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::QuickPlaySetupData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::QuickPlaySetupData>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::QuickPlaySetupData>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::QuickPlaySetupData> GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::QuickPlaySetupData>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__set___4__this(GlobalNamespace::QuickPlaySetupModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::QuickPlaySetupModel, 0x20>(this->__instance, std::forward<GlobalNamespace::QuickPlaySetupModel>(value));
}
constexpr GlobalNamespace::QuickPlaySetupModel GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::QuickPlaySetupModel, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__set__uriBuilder_5__2(System::UriBuilder value)  {
::cordl_internals::setInstanceField<System::UriBuilder, 0x28>(this->__instance, std::forward<System::UriBuilder>(value));
}
constexpr System::UriBuilder GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__get__uriBuilder_5__2() const {
return ::cordl_internals::getInstanceField<System::UriBuilder, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x30>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::QuickPlaySetupModel.GetQuickPlaySetupAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData> (GlobalNamespace::QuickPlaySetupModel::*)(System::Threading::CancellationToken)>(&GlobalNamespace::QuickPlaySetupModel::GetQuickPlaySetupAsync)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21f2088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuickPlaySetupModel>::get(),
                            "GetQuickPlaySetupAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::QuickPlaySetupModel.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupModel::*)()>(&GlobalNamespace::QuickPlaySetupModel::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21f224c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuickPlaySetupModel>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::QuickPlaySetupModel.StartRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupModel::*)()>(&GlobalNamespace::QuickPlaySetupModel::StartRequest)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21f21e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuickPlaySetupModel>::get(),
                            "StartRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::QuickPlaySetupModel.GetQuickPlaySetupInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData> (GlobalNamespace::QuickPlaySetupModel::*)()>(&GlobalNamespace::QuickPlaySetupModel::GetQuickPlaySetupInternal)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x21f2250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuickPlaySetupModel>::get(),
                            "GetQuickPlaySetupInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::QuickPlaySetupModel.IsQuickPlaySetupTaskValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::QuickPlaySetupModel::*)()>(&GlobalNamespace::QuickPlaySetupModel::IsQuickPlaySetupTaskValid)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x21f20ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuickPlaySetupModel>::get(),
                            "IsQuickPlaySetupTaskValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::QuickPlaySetupModel.IsUrlValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::QuickPlaySetupModel::*)(::StringW)>(&GlobalNamespace::QuickPlaySetupModel::IsUrlValid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21f2344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuickPlaySetupModel>::get(),
                            "IsUrlValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::QuickPlaySetupModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupModel::*)()>(&GlobalNamespace::QuickPlaySetupModel::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21f23a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuickPlaySetupModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IQuickPlaySetupModel
constexpr  GlobalNamespace::QuickPlaySetupModel::operator GlobalNamespace::IQuickPlaySetupModel() const noexcept {
return GlobalNamespace::IQuickPlaySetupModel(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::QuickPlaySetupModel::__set__networkConfig(GlobalNamespace::INetworkConfig value)  {
::cordl_internals::setInstanceField<GlobalNamespace::INetworkConfig, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::INetworkConfig>(value));
}
constexpr GlobalNamespace::INetworkConfig GlobalNamespace::QuickPlaySetupModel::__get__networkConfig() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::INetworkConfig, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::QuickPlaySetupModel::__set__client(System::Net::Http::HttpClient value)  {
::cordl_internals::setInstanceField<System::Net::Http::HttpClient, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Http::HttpClient>(value));
}
constexpr System::Net::Http::HttpClient GlobalNamespace::QuickPlaySetupModel::__get__client() const {
return ::cordl_internals::getInstanceField<System::Net::Http::HttpClient, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::QuickPlaySetupModel::__set__request(System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData> GlobalNamespace::QuickPlaySetupModel::__get__request() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::QuickPlaySetupModel::__set__lastRequestTime(System::DateTime value)  {
::cordl_internals::setInstanceField<System::DateTime, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::DateTime>(value));
}
constexpr System::DateTime GlobalNamespace::QuickPlaySetupModel::__get__lastRequestTime() const {
return ::cordl_internals::getInstanceField<System::DateTime, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData> GlobalNamespace::QuickPlaySetupModel::GetQuickPlaySetupAsync(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuickPlaySetupModel>::get(),
                            "GetQuickPlaySetupAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 void GlobalNamespace::QuickPlaySetupModel::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuickPlaySetupModel>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::QuickPlaySetupModel::StartRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuickPlaySetupModel>::get(),
                            "StartRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData> GlobalNamespace::QuickPlaySetupModel::GetQuickPlaySetupInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuickPlaySetupModel>::get(),
                            "GetQuickPlaySetupInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::QuickPlaySetupModel::IsQuickPlaySetupTaskValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuickPlaySetupModel>::get(),
                            "IsQuickPlaySetupTaskValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::QuickPlaySetupModel::IsUrlValid(::StringW url)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuickPlaySetupModel>::get(),
                            "IsUrlValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, url);
}
 GlobalNamespace::QuickPlaySetupModel GlobalNamespace::QuickPlaySetupModel::New_ctor()  {
GlobalNamespace::QuickPlaySetupModel o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::QuickPlaySetupModel>())};
return o;
}
 void GlobalNamespace::QuickPlaySetupModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuickPlaySetupModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
