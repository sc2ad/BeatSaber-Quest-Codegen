// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Utilities.Collections.HashSet
#include "Org/BouncyCastle/Utilities/Collections/HashSet.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Utilities.Collections.HashSet..ctor
Org::BouncyCastle::Utilities::Collections::HashSet* Org::BouncyCastle::Utilities::Collections::HashSet::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<HashSet*>());
}
// Autogenerated method: Org.BouncyCastle.Utilities.Collections.HashSet.Add
void Org::BouncyCastle::Utilities::Collections::HashSet::Add(::Il2CppObject* o) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", o));
}
// Autogenerated method: Org.BouncyCastle.Utilities.Collections.HashSet.CopyTo
void Org::BouncyCastle::Utilities::Collections::HashSet::CopyTo(System::Array* array, int index) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CopyTo", array, index));
}
void Org::BouncyCastle::Utilities::Collections::HashSet::System_Collections_ICollection_CopyTo(System::Array* array, int index) {
  Org::BouncyCastle::Utilities::Collections::HashSet::CopyTo(array, index);
}
// Autogenerated method: Org.BouncyCastle.Utilities.Collections.HashSet.get_Count
int Org::BouncyCastle::Utilities::Collections::HashSet::get_Count() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
}
int Org::BouncyCastle::Utilities::Collections::HashSet::System_Collections_ICollection_get_Count() {
  return Org::BouncyCastle::Utilities::Collections::HashSet::get_Count();
}
// Autogenerated method: Org.BouncyCastle.Utilities.Collections.HashSet.GetEnumerator
System::Collections::IEnumerator* Org::BouncyCastle::Utilities::Collections::HashSet::GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "GetEnumerator"));
}
System::Collections::IEnumerator* Org::BouncyCastle::Utilities::Collections::HashSet::System_Collections_IEnumerable_GetEnumerator() {
  return Org::BouncyCastle::Utilities::Collections::HashSet::GetEnumerator();
}