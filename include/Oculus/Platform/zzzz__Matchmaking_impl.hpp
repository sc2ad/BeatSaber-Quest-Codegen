#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__Matchmaking_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingStats_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Oculus/Platform/zzzz__MatchmakingStatApproach_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResultAndRoom_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResult_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshot_def.hpp"
#include "Oculus/Platform/zzzz__MatchmakingOptions_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingBrowseResult_def.hpp"
#include "Oculus/Platform/zzzz__MatchmakingCriterionImportance_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion::*)(::StringW, ::Oculus::Platform::MatchmakingCriterionImportance)>(&::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2589f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingCriterionImportance>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "importance", ty: "::Oculus::Platform::MatchmakingCriterionImportance", modifiers: "", def_value: Some("{}") }, CppParam { name: "parameters", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion::______Oculus__Platform__Matchmaking__CustomQuery__Criterion(::StringW key, ::Oculus::Platform::MatchmakingCriterionImportance importance, ::System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> parameters) noexcept : ::bs_hook::ValueTypeWrapper() {this->key = key;
this->importance = importance;
this->parameters = parameters;
}
constexpr void ::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion::__set_key(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion::__get_key() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion::__set_importance(::Oculus::Platform::MatchmakingCriterionImportance value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::MatchmakingCriterionImportance, 0x8>(this->__instance, std::forward<::Oculus::Platform::MatchmakingCriterionImportance>(value));
}
constexpr ::Oculus::Platform::MatchmakingCriterionImportance ::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion::__get_importance() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::MatchmakingCriterionImportance, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion::__set_parameters(::System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>, 0x10>(this->__instance, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> ::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion::__get_parameters() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>, 0x10>(this->__instance);
}
 void ::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion::_ctor(::StringW key_, ::Oculus::Platform::MatchmakingCriterionImportance importance_)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingCriterionImportance>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key_, importance_);
}
//  Writing Method size for method: ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery.ToUnmanaged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery::*)()>(&::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery::ToUnmanaged)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x25885e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery>::get(),
                            "ToUnmanaged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery::*)()>(&::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2589f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery::__set_data(::System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery::__get_data() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery::__set_criteria(::ArrayW<::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion> ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery::__get_criteria() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::______Oculus__Platform__Matchmaking__CustomQuery__Criterion>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::cordl_internals::intptr_t ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery::ToUnmanaged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery>::get(),
                            "ToUnmanaged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery::____Oculus__Platform__Matchmaking__CustomQuery()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Oculus__Platform__Matchmaking__CustomQuery>())) {}
 void ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.ReportResultsInsecure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request (*)(uint64_t, ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>)>(&::Oculus::Platform::Matchmaking::ReportResultsInsecure)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x2587fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "ReportResultsInsecure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.GetStats
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingStats> (*)(::StringW, uint32_t, ::Oculus::Platform::MatchmakingStatApproach)>(&::Oculus::Platform::Matchmaking::GetStats)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x25882c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "GetStats",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingStatApproach>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.Browse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult> (*)(::StringW, ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery)>(&::Oculus::Platform::Matchmaking::Browse)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x258843c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "Browse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.Browse2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult> (*)(::StringW, ::Oculus::Platform::MatchmakingOptions)>(&::Oculus::Platform::Matchmaking::Browse2)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x25888fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "Browse2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.Cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request (*)(::StringW, ::StringW)>(&::Oculus::Platform::Matchmaking::Cancel)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2588aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.Cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request (*)()>(&::Oculus::Platform::Matchmaking::Cancel)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2588c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.CreateAndEnqueueRoom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom> (*)(::StringW, uint32_t, bool, ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery)>(&::Oculus::Platform::Matchmaking::CreateAndEnqueueRoom)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2588d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "CreateAndEnqueueRoom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.CreateAndEnqueueRoom2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom> (*)(::StringW, ::Oculus::Platform::MatchmakingOptions)>(&::Oculus::Platform::Matchmaking::CreateAndEnqueueRoom2)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2588f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "CreateAndEnqueueRoom2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.CreateRoom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> (*)(::StringW, uint32_t, bool)>(&::Oculus::Platform::Matchmaking::CreateRoom)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x25890b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "CreateRoom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.CreateRoom2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> (*)(::StringW, ::Oculus::Platform::MatchmakingOptions)>(&::Oculus::Platform::Matchmaking::CreateRoom2)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2589230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "CreateRoom2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.Enqueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult> (*)(::StringW, ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery)>(&::Oculus::Platform::Matchmaking::Enqueue)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x25893e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.Enqueue2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult> (*)(::StringW, ::Oculus::Platform::MatchmakingOptions)>(&::Oculus::Platform::Matchmaking::Enqueue2)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2589584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "Enqueue2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.EnqueueRoom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult> (*)(uint64_t, ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery)>(&::Oculus::Platform::Matchmaking::EnqueueRoom)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2589734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "EnqueueRoom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.EnqueueRoom2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult> (*)(uint64_t, ::Oculus::Platform::MatchmakingOptions)>(&::Oculus::Platform::Matchmaking::EnqueueRoom2)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x25898d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "EnqueueRoom2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.GetAdminSnapshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingAdminSnapshot> (*)()>(&::Oculus::Platform::Matchmaking::GetAdminSnapshot)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2589a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "GetAdminSnapshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.JoinRoom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> (*)(uint64_t, bool)>(&::Oculus::Platform::Matchmaking::JoinRoom)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2589be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "JoinRoom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.StartMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request (*)(uint64_t)>(&::Oculus::Platform::Matchmaking::StartMatch)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2589d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "StartMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.SetMatchFoundNotificationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::Room>)>(&::Oculus::Platform::Matchmaking::SetMatchFoundNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2589e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "SetMatchFoundNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::Room>>::get()}
                        )));
    return ___internal_method;
  }
};
 ::Oculus::Platform::Request ::Oculus::Platform::Matchmaking::ReportResultsInsecure(uint64_t roomID, ::System::Collections::Generic::Dictionary_2<::StringW,int32_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "ReportResultsInsecure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request, false>(nullptr, ___internal_method, roomID, data);
}
/// @param approach: ::Oculus::Platform::MatchmakingStatApproach (default: 1)
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingStats> ::Oculus::Platform::Matchmaking::GetStats(::StringW pool, uint32_t maxLevel, ::Oculus::Platform::MatchmakingStatApproach approach)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "GetStats",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingStatApproach>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingStats>, false>(nullptr, ___internal_method, pool, maxLevel, approach);
}
/// @param customQueryData: ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery (default: csnull)
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult> ::Oculus::Platform::Matchmaking::Browse(::StringW pool, ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery customQueryData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "Browse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult>, false>(nullptr, ___internal_method, pool, customQueryData);
}
/// @param matchmakingOptions: ::Oculus::Platform::MatchmakingOptions (default: csnull)
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult> ::Oculus::Platform::Matchmaking::Browse2(::StringW pool, ::Oculus::Platform::MatchmakingOptions matchmakingOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "Browse2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult>, false>(nullptr, ___internal_method, pool, matchmakingOptions);
}
 ::Oculus::Platform::Request ::Oculus::Platform::Matchmaking::Cancel(::StringW pool, ::StringW requestHash)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request, false>(nullptr, ___internal_method, pool, requestHash);
}
 ::Oculus::Platform::Request ::Oculus::Platform::Matchmaking::Cancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request, false>(nullptr, ___internal_method);
}
/// @param subscribeToUpdates: bool (default: false)
/// @param customQueryData: ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery (default: csnull)
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom> ::Oculus::Platform::Matchmaking::CreateAndEnqueueRoom(::StringW pool, uint32_t maxUsers, bool subscribeToUpdates, ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery customQueryData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "CreateAndEnqueueRoom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom>, false>(nullptr, ___internal_method, pool, maxUsers, subscribeToUpdates, customQueryData);
}
/// @param matchmakingOptions: ::Oculus::Platform::MatchmakingOptions (default: csnull)
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom> ::Oculus::Platform::Matchmaking::CreateAndEnqueueRoom2(::StringW pool, ::Oculus::Platform::MatchmakingOptions matchmakingOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "CreateAndEnqueueRoom2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom>, false>(nullptr, ___internal_method, pool, matchmakingOptions);
}
/// @param subscribeToUpdates: bool (default: false)
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> ::Oculus::Platform::Matchmaking::CreateRoom(::StringW pool, uint32_t maxUsers, bool subscribeToUpdates)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "CreateRoom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method, pool, maxUsers, subscribeToUpdates);
}
/// @param matchmakingOptions: ::Oculus::Platform::MatchmakingOptions (default: csnull)
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> ::Oculus::Platform::Matchmaking::CreateRoom2(::StringW pool, ::Oculus::Platform::MatchmakingOptions matchmakingOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "CreateRoom2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method, pool, matchmakingOptions);
}
/// @param customQueryData: ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery (default: csnull)
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult> ::Oculus::Platform::Matchmaking::Enqueue(::StringW pool, ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery customQueryData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult>, false>(nullptr, ___internal_method, pool, customQueryData);
}
/// @param matchmakingOptions: ::Oculus::Platform::MatchmakingOptions (default: csnull)
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult> ::Oculus::Platform::Matchmaking::Enqueue2(::StringW pool, ::Oculus::Platform::MatchmakingOptions matchmakingOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "Enqueue2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult>, false>(nullptr, ___internal_method, pool, matchmakingOptions);
}
/// @param customQueryData: ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery (default: csnull)
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult> ::Oculus::Platform::Matchmaking::EnqueueRoom(uint64_t roomID, ::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery customQueryData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "EnqueueRoom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Matchmaking__CustomQuery>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult>, false>(nullptr, ___internal_method, roomID, customQueryData);
}
/// @param matchmakingOptions: ::Oculus::Platform::MatchmakingOptions (default: csnull)
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult> ::Oculus::Platform::Matchmaking::EnqueueRoom2(uint64_t roomID, ::Oculus::Platform::MatchmakingOptions matchmakingOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "EnqueueRoom2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult>, false>(nullptr, ___internal_method, roomID, matchmakingOptions);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingAdminSnapshot> ::Oculus::Platform::Matchmaking::GetAdminSnapshot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "GetAdminSnapshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingAdminSnapshot>, false>(nullptr, ___internal_method);
}
/// @param subscribeToUpdates: bool (default: false)
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room> ::Oculus::Platform::Matchmaking::JoinRoom(uint64_t roomID, bool subscribeToUpdates)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "JoinRoom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room>, false>(nullptr, ___internal_method, roomID, subscribeToUpdates);
}
 ::Oculus::Platform::Request ::Oculus::Platform::Matchmaking::StartMatch(uint64_t roomID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "StartMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request, false>(nullptr, ___internal_method, roomID);
}
 void ::Oculus::Platform::Matchmaking::SetMatchFoundNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::Room> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking>::get(),
                            "SetMatchFoundNotificationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::Room>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
} // end anonymous namespace
