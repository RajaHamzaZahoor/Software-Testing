using System;

using NUnit.Framework;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace softwareTesting
{
    [TestFixture]
    class mytest
    {
        [TestCase]
        public void assertEqual()
        {
            test ham = new test();
            Assert.AreEqual(10, ham.add(9, 1));
        }
        [TestCase]
        public void assertFalse()
        {
            test ham = new test();
            Assert.False(false, ham.isEven(1));
        }
        [TestCase]
        public void assertNotNull()
        {
            test ham = new test();
            Assert.NotNull(false, ham.isNull(1));
        }
        [TestCase]
        public void assertNotSame()
        {
            test ham = new test();
            Assert.AreNotSame(null, ham.isNull(1));
        }
        [TestCase]
        public void assertNull()
        {
            test ham = new test();
            Assert.Null(null, ham.isNull(0));
        }
        [TestCase]
        public void assertSame()
        {
            test ham = new test();
            string xy = null;
            Assert.AreSame(xy, ham.isNull(0));
        }
        [Test SetUp]
        public void assertTrue()
        {
            test ham = new test();
            Assert.IsTrue(true, ham.isNull(0));
        }

        [TestCase]
        public void assertRepTrue()
        {
            test ham = new test();
            if (ham.isNull(1) == null)
                Assert.Fail("Test is okay");
        }
        [TestCase]
        [SetUp]
        public void before()
        {
            test ham = new test();
            if (ham.isNull(1) == null)
                Assert.Fail("Test is okay");
        }
       




    }

}

