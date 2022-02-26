// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Forward declaring type: ITypeMath`1<T>
  template<typename T>
  class ITypeMath_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::ITypeMath_1, "UnityEngine.ProBuilder.KdTree", "ITypeMath`1");
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.ITypeMath`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ITypeMath_1 {
    public:
    // public T get_MinValue()
    // Offset: 0xFFFFFFFF
    T get_MinValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::ITypeMath_1::get_MinValue");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_MinValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public T get_NegativeInfinity()
    // Offset: 0xFFFFFFFF
    T get_NegativeInfinity() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::ITypeMath_1::get_NegativeInfinity");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_NegativeInfinity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public T get_PositiveInfinity()
    // Offset: 0xFFFFFFFF
    T get_PositiveInfinity() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::ITypeMath_1::get_PositiveInfinity");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_PositiveInfinity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Int32 Compare(T a, T b)
    // Offset: 0xFFFFFFFF
    int Compare(T a, T b) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::ITypeMath_1::Compare");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Compare", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, a, b);
    }
    // public System.Boolean AreEqual(T[] a, T[] b)
    // Offset: 0xFFFFFFFF
    bool AreEqual(::ArrayW<T> a, ::ArrayW<T> b) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::ITypeMath_1::AreEqual");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AreEqual", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, a, b);
    }
    // public T Multiply(T a, T b)
    // Offset: 0xFFFFFFFF
    T Multiply(T a, T b) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::ITypeMath_1::Multiply");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Multiply", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, a, b);
    }
    // public T DistanceSquaredBetweenPoints(T[] a, T[] b)
    // Offset: 0xFFFFFFFF
    T DistanceSquaredBetweenPoints(::ArrayW<T> a, ::ArrayW<T> b) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::ITypeMath_1::DistanceSquaredBetweenPoints");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "DistanceSquaredBetweenPoints", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, a, b);
    }
  }; // UnityEngine.ProBuilder.KdTree.ITypeMath`1
  // Could not write size check! Type: UnityEngine.ProBuilder.KdTree.ITypeMath`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
