// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ObjectModel.ReadOnlyCollection`1
#include "System/Collections/ObjectModel/ReadOnlyCollection_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: TrueReadOnlyCollection`1<T>
  template<typename T>
  class TrueReadOnlyCollection_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Runtime::CompilerServices::TrueReadOnlyCollection_1, "System.Runtime.CompilerServices", "TrueReadOnlyCollection`1");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Runtime.CompilerServices.TrueReadOnlyCollection`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class TrueReadOnlyCollection_1 : public ::System::Collections::ObjectModel::ReadOnlyCollection_1<T> {
    public:
    // public System.Void .ctor(params T[] list)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrueReadOnlyCollection_1<T>* New_ctor(::ArrayW<T> list) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::TrueReadOnlyCollection_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrueReadOnlyCollection_1<T>*, creationType>(list)));
    }
  }; // System.Runtime.CompilerServices.TrueReadOnlyCollection`1
  // Could not write size check! Type: System.Runtime.CompilerServices.TrueReadOnlyCollection`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
