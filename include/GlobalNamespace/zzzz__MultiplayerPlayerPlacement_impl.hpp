#pragma once
namespace {
#include "GlobalNamespace/zzzz__MultiplayerPlayerPlacement_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerLayout_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c::*)()>(&::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ff974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c._SortPlayers_b__4_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c::*)(::GlobalNamespace::IConnectedPlayer, ::GlobalNamespace::IConnectedPlayer)>(&::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c::_SortPlayers_b__4_0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x20ff97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c>::get(),
                            "<SortPlayers>b__4_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c::__set___9(::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c value)  {
::cordl_internals::setStaticField<::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c>::get>(std::forward<::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c>(value));
}
 ::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c ::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c::__get___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c>::get>();
}
 void ::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c::__set___9__4_0(::System::Comparison_1<::GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::IConnectedPlayer>, "<>9__4_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c>::get>(std::forward<::System::Comparison_1<::GlobalNamespace::IConnectedPlayer>>(value));
}
 ::System::Comparison_1<::GlobalNamespace::IConnectedPlayer> ::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c::__get___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::IConnectedPlayer>, "<>9__4_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c>::get>();
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c::____GlobalNamespace__MultiplayerPlayerPlacement____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__MultiplayerPlayerPlacement____c>())) {}
 void ::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c::_SortPlayers_b__4_0(::GlobalNamespace::IConnectedPlayer p1, ::GlobalNamespace::IConnectedPlayer p2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c>::get(),
                            "<SortPlayers>b__4_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, p1, p2);
}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerPlacement.GetPlayerWorldPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t, ::GlobalNamespace::MultiplayerPlayerLayout)>(&::GlobalNamespace::MultiplayerPlayerPlacement::GetPlayerWorldPosition)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x20ff3d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement>::get(),
                            "GetPlayerWorldPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerLayout>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerPlacement.GetOuterCirclePositionAngleForPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t, int32_t, float_t)>(&::GlobalNamespace::MultiplayerPlayerPlacement::GetOuterCirclePositionAngleForPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20ff518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement>::get(),
                            "GetOuterCirclePositionAngleForPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerPlacement.GetOuterCircleRadius
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::MultiplayerPlayerPlacement::GetOuterCircleRadius)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x20ff528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement>::get(),
                            "GetOuterCircleRadius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerPlacement.GetAngleBetweenPlayersWithEvenAdjustment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t, ::GlobalNamespace::MultiplayerPlayerLayout)>(&::GlobalNamespace::MultiplayerPlayerPlacement::GetAngleBetweenPlayersWithEvenAdjustment)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20ff56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement>::get(),
                            "GetAngleBetweenPlayersWithEvenAdjustment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerLayout>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerPlacement.SortPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer>)>(&::GlobalNamespace::MultiplayerPlayerPlacement::SortPlayers)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x20ff58c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement>::get(),
                            "SortPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerPlacement.GetLocalPlayerIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::IConnectedPlayer>, ::GlobalNamespace::IConnectedPlayer)>(&::GlobalNamespace::MultiplayerPlayerPlacement::GetLocalPlayerIndex)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x20ff688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement>::get(),
                            "GetLocalPlayerIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::IConnectedPlayer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
 ::UnityEngine::Vector3 ::GlobalNamespace::MultiplayerPlayerPlacement::GetPlayerWorldPosition(float_t outerCircleRadius, float_t outerCirclePositionAngle, ::GlobalNamespace::MultiplayerPlayerLayout layout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement>::get(),
                            "GetPlayerWorldPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerLayout>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, outerCircleRadius, outerCirclePositionAngle, layout);
}
 float_t ::GlobalNamespace::MultiplayerPlayerPlacement::GetOuterCirclePositionAngleForPlayer(int32_t playerIndex, int32_t localPlayerIndex, float_t angleBetweenPlayers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement>::get(),
                            "GetOuterCirclePositionAngleForPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, playerIndex, localPlayerIndex, angleBetweenPlayers);
}
 float_t ::GlobalNamespace::MultiplayerPlayerPlacement::GetOuterCircleRadius(float_t angleBetweenPlayers, float_t innerCircleRadius)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement>::get(),
                            "GetOuterCircleRadius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, angleBetweenPlayers, innerCircleRadius);
}
 float_t ::GlobalNamespace::MultiplayerPlayerPlacement::GetAngleBetweenPlayersWithEvenAdjustment(int32_t numberOfPlayers, ::GlobalNamespace::MultiplayerPlayerLayout layout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement>::get(),
                            "GetAngleBetweenPlayersWithEvenAdjustment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerLayout>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, numberOfPlayers, layout);
}
 void ::GlobalNamespace::MultiplayerPlayerPlacement::SortPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer> players)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement>::get(),
                            "SortPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, players);
}
 int32_t ::GlobalNamespace::MultiplayerPlayerPlacement::GetLocalPlayerIndex(::System::Collections::Generic::IList_1<::GlobalNamespace::IConnectedPlayer> otherPlayers, ::GlobalNamespace::IConnectedPlayer localPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPlayerPlacement>::get(),
                            "GetLocalPlayerIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::IConnectedPlayer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, otherPlayers, localPlayer);
}
} // end anonymous namespace
